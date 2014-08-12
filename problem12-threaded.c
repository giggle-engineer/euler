#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <pthread.h>

int triangle( int n )
{
	return (n*(n+1))/2;
}

int nfactors( int n )
{
	int count = 1;
	for( int i = 1; i < n; i++ )
	{
		if( n%i == 0 )
		{
			count+=1;
		}
	}
	return count;
}

struct ThreadData
{
	int start;
	int end;
};

void *find_in_range( struct ThreadData *td )
{
	struct ThreadData* data=(struct ThreadData*) td; /* what the hell? */
	for( int i = td->end; i > td->start; i-- ) //int i = td->start; i < td->end; i++
	{
		int factors = nfactors(triangle(i));
		//printf("start: %d end:%d\n", i, td->end);
		//printf("%d\n", factors);
		if( factors>500 )
		{
			printf("result: %d\n", triangle(i));
			//exit(0);
		}
	}

	return NULL;
}

int main( int argc, char **argv )
{
	assert( triangle(3)==6 );
	assert( nfactors(triangle(7))==6 );
	int limit = 100000;
	int max = 10000;
	struct ThreadData data[limit/max];
	pthread_t thread[limit/max];
	for( int i = 0; i < limit/max; i++ )
	{
		printf("start:%d end:%d\n", i*max, i*max+max);
		data[i].start = i*max;
		data[i].end = i*max+max;
	}
	for( int i = 0; i < limit/max; i++ )
	{
		pthread_create(&thread[i], NULL, find_in_range, &data[i]);
	}

	/* Wait for Threads to Finish */
    for ( int i = 0; i < limit/max; i++ ) {
        pthread_join(thread[i], NULL);
    }
}
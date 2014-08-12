#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>

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

int main( int argc, char **argv )
{
	assert( triangle(3)==6 );
	assert( nfactors(triangle(7))==6 );
	for( int i = 0; i < 100000; i++ )
	{
		int factors = nfactors(triangle(i));
		printf("%d\n", factors);
		if( factors>500 )
		{
			printf("result: %d\n", triangle(i));
			exit(0);
		}
	}
}
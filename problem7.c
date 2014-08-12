#include <stdio.h>
#include <assert.h>

int prime( const int position )
{
	int primes = 0;
	int i = 2;
	while( primes < position )
	{
		int flag = 1;
		for( int j = 2; j < i; j++ )
		{
			if( i%j==0 )
			{	
				flag=0;
				break;
			}
		}
		if( flag )
		{
			printf( "%d\n", i );
			primes++;
		}
		i++;
	}
	return i-1;
}

int main( int argc, char **argv )
{
	assert( prime(6)==13 );
	printf( "%d\n", prime(10001) );
}
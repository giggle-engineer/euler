#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>

int divisible( const int number, const int max )
{
	for( int i = 1; i < max+1; i++ )
	{
		if( number%i!=0 )
		{	
			return 0;
		}
	}
	return 1;
}

int main( int argc, char **argv )
{
	assert( divisible(2520, 10)==1 );
	for( int i = 1; i < INT_MAX; i++ )
	{
		if( divisible( i, 20 ) )
		{
			printf( "%d\n", i );
			exit(0);
		}
	}
}
#include <stdio.h>
#include <math.h>
#include <assert.h>

int sum_of_squares( int max )
{
	int sum = 0;
	for( int i = 1; i < max+1; i++ )
	{
		sum+=(int)pow(i,2);
	}
	return sum;
}

int square_of_sum( int max )
{
	int sum = 0;
	for( int i = 1; i < max+1; i++ )
	{
		sum+=i;
	}
	return (int)pow(sum,2);
}

int main( int argc, char **argv )
{
	assert( sum_of_squares(10)==385 );
	assert( square_of_sum(10)==3025 );
	assert( square_of_sum(10)-sum_of_squares(10)==2640 );
	printf( "%d\n", square_of_sum(100)-sum_of_squares(100) );
}
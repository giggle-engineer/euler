#include <stdio.h>
#include <assert.h>
#include <math.h>

int getDigit( const int number, int place )
{
	return ( number/(int)pow(10,place) ) % 10;
}

int length( int number )
{
	int count = 1;
	while ( number/10!=0 )
	{
		number=number/10;
		count+=1;
	}
	return count;
}

int isPalindrome( const int number )
{
	int digits = length( number )-1;
	for( int i = 0; i < digits+1; i++ )
	{
		if( getDigit(number, i)!=getDigit(number, digits-i) )
		{
			return 0;
		}
	}
	return 1;
}

int main( int argc, char **argv )
{
	const int number = 9009;
	assert( getDigit(number,0)==9 );
	assert( getDigit(number,1)==0 );
	assert( getDigit(number,2)==0 );
	assert( getDigit(number,3)==9 );
	assert( length(number)==4 );
	assert( isPalindrome(number)==1 );
	assert( isPalindrome(91229)==0 );
	int product = 0;
	int palindrome = 0;
	for( int i = 100; i < 1000; i++ )
	{
		for( int j = 100; j < 1000; j++ )
		{
			product = i*j;
			if( isPalindrome(product) )
			{
				if( product>palindrome )
				{
					palindrome=product;
				}
				printf( "%d\n", product );
			}
		}
	}
	printf( "largest palindrome: %d\n", palindrome );
}
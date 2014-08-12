#include <stdio.h>

int main( int argc, char **argv )
{
	long number = 600851475143;
	for( long divisor = 1; divisor < 775146; divisor++ ) 
	{
		if( number%divisor==0 )
		{
			number = number/divisor;
			printf("%ld\n", divisor);
		}
	}
}
#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
	for( int a = 0; a < 400; a++ )
	for( int b = 0; b < 400; b++ )
	{
		float c = sqrt(pow(a,2)+pow(b,2));
		if( a < b && b < c )
		{
			if(a+b+c==1000)
			{
				printf("result: %f\n", a*b*c);
			}
		}
	}
	return 0;
}
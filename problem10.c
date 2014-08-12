#include <stdio.h>
#include <math.h>

int isprime( const int number )
{
    int max = (int)(sqrtf(number)+0.5f);
    for( int j = 2; j <= max; j++ )
    {
        if( number%j==0 )
        {   
            return 0;
        }
    }
    return 1;
}

int main( int argc, char **argv )
{
    long long sum = 0;
    for( int i = 2; i < 2000000; i++ )
    {
        if(isprime(i))
        {
            sum+=i;
        }
    }
    printf( "prime: %lld\n", sum );
    return 0;
}
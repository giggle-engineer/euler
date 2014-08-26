#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int collatz_length( const int starting_number )
{
    unsigned int n = starting_number;
    int length = 1;
    while( n > 1)
    {
        if( n % 2 )
        {
            n = (3*n)+1;
        }
        else
        {
            n = n/2;
        }
        length++;
    }
    return length;
}

int main( int argc, char **argv )
{
    assert( collatz_length( 13 ) == 10 );
    int highest = 0;
    int starting_number = 0;
    for( int i = 2; i < 1000000; i++ )
    {
        int length = collatz_length( i );
        printf("progress: %d out of 1000000, length:%d\n", i, length);
        if( highest < length )
        {
            highest = length;
            starting_number = i;
        }
    }
    printf("result: %d with chain size:%d\n", starting_number, highest);
}
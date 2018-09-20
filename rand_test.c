#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand( time(NULL) );
    int i = 20;
    while( i-- )
        printf( "%d\t%d\n", i, rand() );
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand( time(NULL) );
    int i = 20;
    while( i-- )
        printf( "%d\t%08x\n", i, rand() );
}

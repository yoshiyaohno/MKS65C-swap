#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int arr[10];
    unsigned int rev_arr[10];
    int i;
    srand( time(NULL) );

    for( i = 0; i < 9; ++i )
        arr[i] = rand();

    printf("ARR VALUES:\n");
    for( i = 0; i < 10; ++i )
        printf("%08x\n", arr[i] );
    printf("\n");

    // int *arp, *rarp;
    // printf("ARR reverse readings:\n");
    // arp = arr + sizeof(arr) / 4 - 1;
    // while( arp != (int*) arr )
    //     printf("%08x\n", *arp--);

    int *arp, *rarp;
    arp = arr + sizeof(arr) / 4;
    rarp = rev_arr;
    // this is a great lesson in why not to use ++ and --
    while( arp-- != (int*) arr )
        *rarp++ = *arp;
        
    printf("RARR VALUES:\n");
    for( i = 0; i < 10; ++i )
        printf("%08x\n", rev_arr[i] );
    printf("\n");

}

#include <stdio.h>
#define N 10

int main(void)
{
    int i = 1;
    while ( i < N )
    {
        printf("%d\n", i);
        if ( i == 5 ) {
            break;//breakでループを抜けることも可能。
        }
        i++;
    }

    return 0;
}
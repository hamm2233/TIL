#include <stdio.h>
#define N 10 //Nに10という値を定義するN=10となる

int main(void)
{
    int i = 1;
    while ( i < N ) //while(条件式)で条件式を満たしている間、繰り返す。
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
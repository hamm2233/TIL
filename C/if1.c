#include <stdio.h>

int main(void)
{
    int i;

    printf("i = ");
    scanf("%d", &i);
    //if(条件式)の形で書く等しいかを比べる場合は=ではなく==を用いて比較する。
    if ( i % 2 == 0 ) {//%はあまりを求めるときに使用する。
        printf("%d is even number.\n", i); // 偶数の時出力する。
    }
}
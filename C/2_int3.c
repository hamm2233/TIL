#include <stdio.h>

int main(void)
{
    int a = 1,b = 1;
    printf("a = 1,b = 1");
    //それぞれ+,-,*,/で四則演算ができる
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    b = 2;
    printf("b = 2");
    printf("a / b = %d\n", a / b);//割り切れない場合、小数点以下を切り捨てて整数表示する。
    printf("a / b = %d あまり %d\n", a / b, a % b);//%で余りを求められる

    return 0;
}
#include <stdio.h>//この中にはscanfも含まれる

int main(void)
{
    int a, b;
    printf("Print a + b:\n");
    printf("a = ");
    scanf("%d", &a); //scanfでaの値を読み込む。入力された情報をどこに格納するかを与えるため、変数aのメモリアドレスを与えるために&aを用いる。
    printf("b = ");
    scanf("%d", &b); //scanfでbの値を読み込む。
    printf("a + b = %d\n", a + b);

    return 0;
}
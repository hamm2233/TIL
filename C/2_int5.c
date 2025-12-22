#include <stdio.h>

int main(void)
{
    int a = 2;

    printf("a = 2\n");

    printf("a + 2 = %d\n", a += 2);//a = a + 2はa += 2のように簡略化して書ける
    a = 1;
    printf("a - 2 = %d\n", a -= 2);//a += 2と同じようにa = a - 2を簡略化している
    a = 1;
    printf("a * 2 = %d\n", a *= 2);//a *= 2と同じようにa = a * 2を簡略化している
    a = 1;
    printf("a / 2 = %d\n", a /= 2);//a /= 2と同じようにa = a / 2を簡略化している


    return 0;
}
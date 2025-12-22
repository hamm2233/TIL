 #include <stdio.h>

int main(void) 
{
    int i;

    printf("i = ");
    scanf("%d", &i);

    if ( i % 3 == 0 ) {
        printf("%d is divisible by 3.\n", i);
    } else if ( i % 3 == 1 ) {//else if(条件式)で3つ以上の条件も追加できる
        printf("When %d is divided by 3, the remainder is 1.\n", i);
    } else {
        printf("When %d is divided by 3, the remainder is 2.\n", i);
    }

    return 0;
}
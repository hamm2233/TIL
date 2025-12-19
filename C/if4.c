 #include <stdio.h>

int main(void) 
{
    int i;

    printf("i = ");
    scanf("%d", &i);
    //ifの中身の式が1文の場合は{}を省略できる。
    if( i % 3 == 0 )
        printf("%d is divisible by 3.\n", i);
    else if(i % 3 == 1) printf("When %d is divided by 3, the remainder is 1.\n", i);
    //上のように1行でも書ける
    else {
        printf("When %d is divided by 3, the remainder is 2.\n", i);
    }

    //ただし、2文以上だとエラーにはならないが2文目以降はifの外だと認識される。
    if ( i % 2 == 0 ) 
        printf("%d is even number.\n", i);
    else 
        printf("%d is not even number.\n", i);
        printf("%d is odd number\n", i);//ifの条件式に関係なく常に実行される(エラーや不具合の元になるので注意)
    
    return 0;
}
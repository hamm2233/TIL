 #include <stdio.h>

int main(void) 
{
    int i;

    printf("i = ");
    scanf("%d", &i);
    //if(条件式) else で条件式を満たさない場合、elseを実行できる
    if( i % 2 == 0 ) {
        printf("%d is even number.\n", i);
    } else {
        printf("%d is odd number.\n", i);//iが偶数でないつまり奇数の時出力する
    }

    return 0;
}
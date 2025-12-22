#include <stdio.h>
#define N 10

int main(void) {
    for ( int i = 1; i < N; i++ ) {//ここでint i = 0と書くと、この外でそのままiを使用することはできない。
        printf("%d\n", i);
    }

    printf("i = %d\n", i);//ここでiが未定義というエラーが起きる。

    return 0;
}
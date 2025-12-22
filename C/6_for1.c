#include <stdio.h>
#define N 10
//5_while1と同じ挙動をするプログラム
int main(void) {
    int i;
    for ( i = 1; i < N; i++ ) {//for(初期値;条件式;式)の形で書くwhile文を一文にまとめたように書ける。
        printf("%d\n", i);
    }

    return 0;
}
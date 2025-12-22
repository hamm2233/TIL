#include <stdio.h>
#define N 10

int main(void) {
    for ( int i = 1; i < N; i++ ) {//初期値の式でint i = 0をまとめて書くことでよりシンプルにできるが注意が必要。(6_for2_1.c参照)
        printf("%d\n", i);
    }

    return 0;
}
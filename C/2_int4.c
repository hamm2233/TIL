#include <stdio.h>

int main(void)
{
    int a = 1;
    
    printf("a = 1\n");

    printf("a++\n");//a++でaの値に1を足す。(a = a + 1 => a++)
    printf("a = %d\n", a++);//a++の場合、aの値を1増やす前にprintf()が実行され、aの値(a = 1)が読み取られる。その後、aの値が1増える。
    printf("a = %d\n", a);//ここでaの値が1増えている。
    a = 1;
    printf("++a\n");//++aでaの値に1を足す。(a = a + 1 => ++a)ただし、a++とは違い、先にaの値が1増える。
    printf("a = %d\n", ++a);//先に++aでaの値が1増える。その後、printf()が実行される。
    printf("a = %d\n", a);//前のprintf()ではすでにaの値が1増えた数が出力されているため、ここで出力される値は前のprintf()と同じ。
    a = 1;
    printf("a--\n");//a--でaの値から1を引く。(a = a - 1 => a--)
    printf("a = %d\n", a--);//1を足すか引くかの違いで、a++と挙動は同じ。
    printf("a = %d\n", a);
    a = 1;
    printf("--a\n");//--aでaの値から1を引く。(a = a - 1 => --a)
    printf("a = %d\n", --a);//1を足すか引くかの違いで、++aと挙動は同じ。
    printf("a = %d\n", a);

    return 0;
}
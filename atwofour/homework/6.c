#include <stdio.h>

int main(void)
{
    int i;
    char a,b,c,d,e,f,g,h,j,k,l,m,n,o,p;

    printf("15文字までだぞ～～～～～～？\n");

    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h,&j,&k,&l,&m,&n,&o,&p);

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);

    return 0;
}


/* 実行結果
 *
 * 15文字までだぞ～～～～～～？
 * abcdefg
 *
 *
 * ^C
*/

/* 修正点
 *
 * そもそも問題に沿ってない
*/

/* 注意点
 *
 * コンパイル時に警告が出てる
*/

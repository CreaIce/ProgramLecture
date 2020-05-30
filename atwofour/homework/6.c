#include <stdio.h>

void moji(char[]);
int main(void)
{
    char a[32];
    printf("31文字までだぞ～～～～～～？\n");
    scanf("%s",a);
    moji(a);
    return 0;
}
void moji(char a[])
{
    int i;
    for (i = 0;a[i]!='\0';++i)
    {
        printf("%c",a[i]);
    }
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
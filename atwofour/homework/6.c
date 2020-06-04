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
 * 31文字までだぞ～～～～～～？
 * abcdefg
 * abcdefg
*/

/* 修正点
 *
*/

/* 注意点
 *
 * 出力後に改行してない
 * 関数の間を改行してないから見づらい
 * 15行目 スペースを使うのか使わないのか統一すること
 * 関数名を英語にする
*/

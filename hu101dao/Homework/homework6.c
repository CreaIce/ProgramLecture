#include <stdio.h>

void output(char[]);

int main(void)
{
    char c[11];
    printf("10文字以内、半角英数で名前を入力ｾｲｰ\n");
    scanf("%s",c);
    output(c);
    
    return 0;
}

void output(char c[])
{
    int i;
    for(i = 0; c[i] != '\0' ; i++)
    {
        printf("%c",c[i]);
    }
} 

/* 実行結果
 *
 * 10文字以内、半角英数で名前を入力ｾｲｰ
 * abcdefg
 * abcdefg
*/

/* 修正点
 *
*/

/* 注意点
 *
 * 出力後に改行してない
 * 11, 22行目 行末に余計なスペースがある
 * 18行目の2つ目の;の前のスペースを付けるか統一する
*/

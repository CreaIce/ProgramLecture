#include <stdio.h>

int main(void)
{
    int i;
    int a = 0;
    int b = 0;

    for (i = 0; i < 10; ++i)
    {
        scanf("%d",&a);

        if (b < a)
        {
            b = a;
        }
    }

    printf("%dサイコーーーーーーーッッッ！！！！！\n",b);

    return 0;
}

/* 実行結果
 *
 * 入力
 * 1
 * 5
 * 8
 * 2
 * 6
 * 4
 * 7
 * 0
 * 6
 * 2
 *
 * 出力
 * 8サイコーーーーーーーッッッ！！！！！
*/

/* 修正点
 *
*/

/* 注意点
 *
 * 変数aの初期化は不要
 * 変数aとbを意味のある名前に
*/

#include<stdio.h>

int main(void)
{

    for(int i = 1;i <= 5; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
        printf("*");
        }
        printf("\n");
    }

    return 0;
}

/* 実行結果
 *
 * *
 * **
 * ***
 * ****
 * *****
*/

/* 修正点
 *
*/

/* 注意点
 *
 * 10行目 インデントが違う
*/

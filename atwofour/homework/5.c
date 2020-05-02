#include <stdio.h>

int main(void)
{
    int i,j;
    
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= i; ++j)
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
 * 6,13,15行目 行末に無駄なスペースがある
 * forの初期値は理由がない限り0にするように
*/

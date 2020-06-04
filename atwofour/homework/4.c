#include <stdio.h>
int main(void)
{
    int p[10];
    int i;
    int j = 0;
    int k = 0;
    int m = 0;

    printf("10人をグループ1~3に分けるべし！(入力 1~3)\n");

    for (i = 0; i < 10; ++i)
    {
        scanf("%d",&p[i]);
    }

    for (i = 0; i < 10; ++i)
    {
        if (p[i] == 1)
        {
            j += p[i];
        }
        else if(p[i] == 2)
        {
            k += p[i];
        }
        else if(p[i] == 3)
        {
            m += p[i];
        }
        else
        {
            printf("ばーーーーーーーーーーーか\n");
        }
    }
    int l = k/2;
    int n = m/3;
    printf("グループ1　%d人\n",j);
    printf("グループ2　%d人\n",l);
    printf("グループ3　%d人\n",n);
    return 0;
}

/* 実行結果
 *
 * 1
 * 2
 * 3
 * 1
 * 2
 * 3
 * 1
 * 2
 * 3
 * 1
 * グループ1　4人
 * グループ2　3人
 * グループ3　3人
*/

/* 修正点
 *
 * 口頭にて
*/

/* 注意点
 *
 * 17,25,27行目に無駄なスペースがある
*/

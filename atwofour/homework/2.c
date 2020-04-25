#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    int a;
    int b[10];
    int max;
    
    srand((unsigned)time(NULL));
    for (a = i = 1;i <= 10; ++i)
    {
        b[i] = rand();
        printf("%d\n",b[i]);
        a += b[i];
    }

    max = b[1];

    for (i = 1; i <= 10; ++i)
    {
        if (max < b[i])
        {
            max = b[i];
        }
        
    }
    
    printf("%dサイコーーーーーーーッッッ！！！！！\n",max);

    return 0;
}

/* 実行結果
 *
 * 795036011
 * 1032938112
 * 1751175313
 * 878774929
 * 675951473
 * 1627051051
 * 816745608
 * 658068644
 * 585934187
 * 256284872
 * 1751175313サイコーーーーーーーッッッ！！！！！
*/

/* 修正点
 * 
 * そもそも入力を受け付けてない
 * まだ教えてないものを使ってる
*/

/* 注意点
 *
 * 11,28,30行目 空行なのにスペースが入力されてる
*/

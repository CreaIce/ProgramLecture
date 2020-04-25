#include <stdio.h>

int main(void)
{
    int input;

    scanf("%d",&input) ;

    if (input == 0)
    {
        printf("zero\n");
    }

/* %2=1 */
    else if (input %2 == 1)
    {
        printf("奇数\n");
    }
/* %2=0 */
    else
    {
        printf("偶数\n");
    }

    return 0;

}

/* 実行結果
 *
 * 入力:1
 * 奇数
 *
 * 入力:2
 * 偶数
 *
 * 入力:0
 * zero
*/

/* 修正点
 *
*/

/* 注意点
 *
 * 7行目  セミコロンの前のスペースが気になる
 *        他と合わせた方がいいかも
 * 13行目 else ifとelseの間が空いてないけどどっちかに合わせて
 * 15行目 %の後にスペースがないからできれば合わせるように
*/

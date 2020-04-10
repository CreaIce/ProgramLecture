#include <stdio.h>

int main(void)
{
   int input;

   scanf("%d",&input) ;
/* %2=0 */
   if (input%2 == 0)
   {
      printf("偶数\n");
   }
/* %2=1 */
   else if (input%2 == 1)
   {
      printf("奇数\n");
   }
   else;    // ここにセミコロンはいらない
   {
      printf("0\n");
   }

   printf("input = %d\n",input);

   return 0;
}

/* 実行結果
 *
 * 入力:1
 * 奇数
 * 0
 * input = 1
 *
 * 入力:2
 * 偶数
 * 0
 * input = 2
 *
 * 入力:0
 * 偶数
 * 0
 * input = 0
*/

/* 修正点
 *
 * 0を入力した時に偶数って表示されてる
 * どの入力でも0が表示されてる
*/

/* 注意点
 *
 * インデントがスペース3文字になってる
 * 問題はないけどC言語の規定だと4文字だからそれに合わせた方がいいかも
*/

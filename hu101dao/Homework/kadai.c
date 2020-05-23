#include <stdio.h>

int main(void)
{
  int input;
  int rem;

scanf("%d", &input);

rem = input % 2;

  if(rem == 1)
  {
    printf("奇数だお\n");
  }
  else if(input == 0){
    printf("０じゃよ\n");
  }
  else
    printf("偶数だお\n");
 
 return 0;
}

/* 実行結果
 *
 * 入力:1
 * 奇数だお
 *
 * 入力:2
 * 偶数だお
 *
 * 入力:0
 * ０じゃよ
*/

/* 修正点
 *
 * なし
*/

/* 注意点
 *
 * 8, 10行目だけインデントがない
 * 13行目だけインデントが1文字多い
 * 18行目のelseに{}がないからつけるように(後日説明)
 * 20行目がスペースだけの行になってる
 * 22行目だけインデントが1文字少ない
*/

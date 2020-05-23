#include<stdio.h>

#define ANIMAL 10

int main(void)
{
    int arr[ANIMAL];
    int i;
    int input;
    int x = 0;
    int y = 0;
    int z = 0;
    for(i = 1; i  <= ANIMAL; ++i)
    {
    scanf("%d",&input);

        if(input == 1)
        {
            x += 1;
        }
        else if(input == 2)
        {
            y += 1;
        }
        else if(input == 3)
        {
            z += 1;
        }
        else 
        {
            printf("「fuck you!!」あなたは死にました\n");
        }
    }
    printf("ウサギさんクラスは%d人です\n",x);
    printf("リスさんクラスは%d人です\n",y);
    printf("そしてヒグマさん%d体を野に放ちました\n",z);

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
 * ウサギさんクラスは4人です
 * リスさんクラスは3人です
 * そしてヒグマさん3体を野に放ちました
*/

/* 修正点
 *
 * 配列を使ってない
*/

/* 注意点
 *
 * 15行目 インデントが違う
 * 29,39行目 行末にスペースがある
*/

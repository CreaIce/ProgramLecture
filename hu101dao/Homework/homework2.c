#include <stdio.h>

int main(void)
{
    int input1;
    int input2 = 0;
    int i;

    for(i = 0;i <1; ++i ){
    printf("貴様の戦闘力(BP)を入力したまへ\n");
    scanf("%d",&input1);
    

        for(i = 1;i < 10; ++i)
        {
            if(input1 < input2){
                printf("(´⊙◞౪◟⊙)「雑魚が…」BP%d\n",input2);
                scanf("%d",&input1);
            }
            else if(input1 > input2){
                printf("(´・ω・｀)「その程度ですぅ？？」BP%d\n",input1);
                scanf("%d",&input2);
            }
            else if(input1 == input2){
                printf("(´⊙◞౪◟⊙)「くっ…」\n(´・ω・｀)「やりますねぇ～」\n");
                scanf("%d",&input1);
            }   
            else{
                printf("(´⊙◞౪◟⊙)「帰れ！」(´・ω・｀)\n(´⊙◞౪◟⊙)「萎えるわ～」\n(´・ω・｀)「最初からやるべ」\n");
                i = 0;
                input1 = 0;
                input2 = 0;
            }
            //整数以外を入力されたら弾こうと思ったら無理ですた
        }
    }

    if(input1 < input2){
        printf("優勝はBP%d、(´⊙◞౪◟⊙)じゃ～！！\n",input2);
        printf("(´⊙◞౪◟⊙)「弱い…弱すぎる…っ」\n");
    }
    else
    {
        printf("優勝はBP%d、(´・ω・｀)じゃ～！！\n",input1);
        printf("(´・ω・｀)「肩慣らしにもならんのぉ～」\n");
    }


    return 0;
}

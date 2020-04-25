#include<stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    int input;

    printf("プレイボール!\n");

    while (i < 3){
        
        scanf("%d",&input);
        
        if (input == 2){
        ++i;
        printf("ストライーク！\n");
        }
        else if(input == 1){
        ++j;
        printf("ボール\n");
        }
        if(j == 4){
        printf("ボールフォア！\nｶｴﾚ-!ﾉｰｺﾝ!ﾌｼﾞﾅﾐｰ!\n");
        i = 0;
        j = 0; 
        }
    }

        printf("ストライーック！バッターOUT！！");


return 0;

}

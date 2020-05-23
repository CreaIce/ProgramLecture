#include <stdio.h>

char c[11];

int main(void)
{
    printf("10文字以内、半角英数で名前を入力ｾｲｰ\n");

    scanf("%s", c);

    printf("いつから%c%c%c%c%c%c%c%c%c%cだと錯覚していた？",c[0], c[1], c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9]);

    return 0;
}



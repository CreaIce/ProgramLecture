#include <stdio.h>

int main(void)
{
    int i;
    int s = 0;
    int b = 0;

    printf("1 ボール\n");
    printf("2 ストライク\n");

    while (s < 3 && b < 4)
    {
    scanf("%d",&i) ;
        if (i == 1)
        {
            printf("ボール-(*_*;\n");
            b++;
        }
        else if (i == 2)
        {
            printf("スットライィィッッッッッッ！！！！！(≧▽≦)b\n");
            s++;
        }
    printf("%dボール %dストライク",b,s);

    }
    
    if (s == 3)
    {
        printf(" \n");
        printf("スットライィーーーーッスリーーッ！\n") ;
        printf("バッターーアウーーーーッッ！！！！\n") ;
    }
    else if (b == 4)
    {
        printf(" \n");
        printf("フォアボーーーーッッッツツ！！！！\n");
    }
    
    return 0;
}
#include <stdio.h>

void output(char[]);

int main(void)
{
    char c[11];
    printf("10文字以内、半角英数で名前を入力ｾｲｰ\n");
    scanf("%s",c);
    output(c);
    
    return 0;
}

void output(char c[])
{
    int i;
    for(i = 0; c[i] != '\0' ; i++)
    {
        printf("%c",c[i]);
    }
} 

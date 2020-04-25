#include <stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    if (input == 0)
    {
        printf("%dはゼロです。\n", input);
    }
    else if (input % 2 == 1)
    {
        printf("%dは奇数です。\n", input);
    }
    else
    {
        printf("%dは偶数です。\n", input);
    }

    return 0;
}

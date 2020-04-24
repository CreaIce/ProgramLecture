#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    int a;
    int b[10];
    int max;
    
    srand((unsigned)time(NULL));
    for (a = i = 1;i <= 10; ++i)
    {
        b[i] = rand();
        printf("%d\n",b[i]);
        a += b[i];
    }

    max = b[1];

    for (i = 1; i <= 10; ++i)
    {
        if (max < b[i])
        {
            max = b[i];
        }
        
    }
    
    printf("%dサイコーーーーーーーッッッ！！！！！\n",max);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int p[10];
    int i;
    int j = 0;
    int k = 0;
    int m = 0;

    printf("Aさんのグループは？\t");
    scanf("%d",&p[0]);

    printf("Bさんのグループは？\t");
    scanf("%d",&p[1]);

    printf("Cさんのグループは？\t");
    scanf("%d",&p[2]);

    printf("Dさんのグループは？\t");
    scanf("%d",&p[3]);

    printf("Eさんのグループは？\t");
    scanf("%d",&p[4]);

    printf("Fさんのグループは？\t");
    scanf("%d",&p[5]);

    printf("Gさんのグループは？\t");
    scanf("%d",&p[6]);

    printf("Hさんのグループは？\t");
    scanf("%d",&p[7]);

    printf("Iさんのグループは？\t");
    scanf("%d",&p[8]);

    printf("Jさんのグループは？\t");
    scanf("%d",&p[9]);

    for (i = 0; i < 10; ++i)
    {
        if (p[i] == 1)
        {
            j += p[i];
        }
    }
    
    printf("グループ1　%d人\n",j);
    
    for (i = 0; i < 10; ++i)
    {
        if (p[i] == 2)
        {
            k += p[i];
        }
    }
    int l = k/2;

    printf("グループ2　%d人\n",l);

    for (i = 0; i < 10; ++i)
    {
        if (p[i] == 3)
        {
            m += p[i];
        }
    }
    int n = m/3;

    printf("グループ3　%d人\n",n);

    return 0;
}
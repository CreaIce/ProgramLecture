#include <stdio.h>

int main(void)
{
   int input;

   scanf("%d",&input) ;
/* %2=0 */
   if (input%2 == 0)
   {
      printf("偶数\n");
   }
/* %2=1 */
   else if (input%2 == 1)
   {
      printf("奇数\n");
   }
   else;
   {
      printf("0\n");
   }

   printf("input = %d\n",input);

   return 0;
}

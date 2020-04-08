#include <stdio.h>

int main(void)
{
  int input;
  int rem;

scanf("%d", &input);

rem = input % 2;

  if(rem == 1){
     printf("奇数だお\n");
  }
  else if(input == 0){
    printf("０じゃよ\n");
  }
  else
    printf("偶数だお\n");
 

 return 0;
}
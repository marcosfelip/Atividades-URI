#include <stdio.h>

int main()
{
 int a, i;
 int tmp = 0;

 for (i = 0; i < 5; ++i)
 {
  scanf("%d", &a);
  if(a < 0){
   a = -a;
  }

  if(a % 2 == 0){
   tmp++;
  }
 }

 printf("%d valores pares\n", tmp);

 return 0;
}

#include<stdio.h>
int main()
{
  int a=3, b=4;
  printf("%d + %d = %d\n", 1,2);
  printf("%d + %d = %d\n", 1,2,3,4);
  printf("%d + %d = %d\n", '1', '2' , '3');
  printf("%c + %c = %c\n ",'1', '2' , '3');
  printf("%d + %d = %d\n", 'a', 'b' , 'A'+'B');
  printf("%D + %d = %d\n", 1,2,3);
  printf("%d + %D = %d\n",1,2,3);
  printf("%d %% %d = %d\n", 5,2,5%2);
  printf("%%d + %%d = %%d\n",5,2,5+2);

   return 0;
}
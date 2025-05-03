#include<stdio.h>
int main()
{
  printf("%d\n",'0' > 0); /*value of char 0= 48 so 48 > 0*/
  printf("%d\n",5+3/2==4);
  printf("%d\n",(5+3)/2==4);
  printf("%d\n", 1+2-2==1);
  printf("%d\n",5*3/2==7);
  printf("%d\n",5/3*2==2);
  printf("%d\n",5-3+2==4);
  printf("%d\n",2+3*4+5==19);
  printf("%d\n",2+3*4+5==45);
  printf("%d\n",2+3*4+5==25);
  printf("%d\n",(2+3)*(4+5)==45);

  return 0;
}
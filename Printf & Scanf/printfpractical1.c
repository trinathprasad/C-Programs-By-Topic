#include<stdio.h>
int main()
{
  int a=39;
  printf("%5d\n",a);
  printf("%-5d\n",a);
  printf("%*d\n",4,a);
  printf("%-*d\n",4,a);
  printf("%.5d\n",a);
  printf("%.-5d\n",a);
  printf("% -.5d\n",a);
  printf("%i + %i = %i\n",1,2,3);
  printf("%id + %id = %id\n", 1,2,3);

return 0;
}
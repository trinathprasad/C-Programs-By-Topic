#include<stdio.h>
int main()
{
  printf("%d\n",25 & 15);
  printf("%d\n",25 | 15);
  printf("%d\n",25 ^ 15);
  printf("%d\n",~25 );
  printf("%d\n",~-25);
  printf("%d\n",25<<2);
  printf("%d\n",25<<15);
  printf("%d\n",25<<16);
  printf("%d\n",25>>2);
  printf("%d\n",25>>5);
  printf("%d\n",-25<<2);

  return 0;

}
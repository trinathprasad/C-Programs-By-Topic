#include<stdio.h>
int main()
{
  printf("%d\n", 5==5 , 7==5);
  printf("%d, %d\n", 5==5 , 7==5);
  printf("%d\n",5==5 && 7==5);
  printf("%d\n", 5==5 && 7!=5);
  printf("%d\n", 5==5 || 7==5);
  printf("%d\n", !(5>=5));
  printf("%d\n", 1==1 && 2<=2 && 3>3);
  printf("%d\n", 1==1 || 2<=2 && 3>3);
  printf("%d\n", (1==1 || 2<=2) && 3>3);

  return 0;

}
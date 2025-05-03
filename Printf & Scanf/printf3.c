#include<stdio.h>
int main()
{
  printf("%d\n", 1.5);
  printf("%d\n", 1.0); /*When printf("%d", ...) is used, it expects an int, but the argument is double, leading to garbage values 
  */
  printf("%d\n", 1.1);
  printf("%d\n",(int) 1.2); /*explicit type casting*/
  return 0;
}
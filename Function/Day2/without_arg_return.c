//function without arguments, without return value.
#include<stdio.h>
void welcome(void);
int main()
{
welcome();
return 0;
}
void welcome(void)
{
  printf("welcome to user defined functions");
}
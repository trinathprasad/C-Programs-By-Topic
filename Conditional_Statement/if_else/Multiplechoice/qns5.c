#include<stdio.h>
int main()
{
  if(9 && 9==9) printf("Hi");else printf("Bye");
  if((9 && 9)==9) printf("Hi");else printf("Bye");

  return 0;
}
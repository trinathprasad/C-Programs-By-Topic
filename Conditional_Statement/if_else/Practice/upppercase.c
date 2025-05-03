#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character ");
  scanf("%c", &ch);

  if(ch>='A' && ch<='Z') printf("Uppercase char");
  else 
  printf("Not a uppercase char");

  return 0;
}
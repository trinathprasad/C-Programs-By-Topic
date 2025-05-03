#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character ");
  scanf("%c",&ch);
  if(ch>='a' && ch<='z')
  printf("Lowecase character");

  if (!(ch>='a' && ch<='z'))
  printf("Not a lowecase character");


return 0;
}
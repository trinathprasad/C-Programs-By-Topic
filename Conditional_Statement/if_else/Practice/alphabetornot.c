#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character ");
  scanf("%c", &ch);

  if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
  {
    printf("%c is an alphabet",ch);
  }
  else {
  printf(" Is not an alphabet");
  }

  return 0;
}
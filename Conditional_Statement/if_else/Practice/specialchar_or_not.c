#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character ");
  scanf("%c", &ch);

  if(!(ch>='a' && ch<='z' || ch>='A' && ch>='Z' || ch>='0' && ch<='9'))
  {
    printf("It is a special char");
  }
  else {
  printf("It is not a special char" );
  }

  return 0;
}
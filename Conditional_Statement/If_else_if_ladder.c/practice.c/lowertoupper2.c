#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character:");
  scanf("%c",&ch);
  if(ch>='a' && ch<='z')
  {
    ch-=32;
  }
  else{
    ch+=32;
  }
  printf("ch=%c",ch);

  return 0;
}
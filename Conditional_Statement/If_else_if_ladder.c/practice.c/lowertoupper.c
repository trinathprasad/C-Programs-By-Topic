#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("Enter the lower char:");
  ch=getchar();
  if(islower(ch))
  {
  ch=toupper(ch);
  }
  else 
  {
    ch=tolower(ch);
  }
  printf("ch=%c",ch);

  return 0;
}
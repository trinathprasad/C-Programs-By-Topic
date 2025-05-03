#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char s[100];
  int i;
  printf("Enter a string:");
  scanf("%[^\n]",s);
  for(i=0;s[i];i++)
  {
    strupr(s);
  }
  s[0]=tolower(s[0]);
  for(i=0;s[i];i++)
  {
    if(s[i]==' '&& s[i+1]>='A' && s[i+1]<='Z')
    {
      s[i+1]=tolower(s[i+1]);
    }
  }
  printf("Converted string %s",s);
  return 0;
}
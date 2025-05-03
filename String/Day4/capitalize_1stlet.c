#include<stdio.h>
int main()
{
  char s[100];
  int i;
  printf("Enter a string");
  scanf("%[^\n]",s);
  for(i=0;s[i];i++)
  { if(s[i]>='A'&& s[i]<='Z')
    {
    s[i]=s[i]+32;
    }
  }
  if(s[0]>='a' && s[0]<='z')
  {
    s[0]=s[0]-32;
  }
  for(i=1;s[i];i++)
  {
    if(s[i]==' ' && s[i+1]>='a' && s[i+1]<='z')
    {
      s[i+1]=s[i+1]-32;
    }
  }
  printf("Converted string %s",s);

  return 0;
}
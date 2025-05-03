#include<stdio.h>
int main()
{
  char s[100];
  int i;
  printf("Enter a string:");
  scanf("%[^\n]",s);
  for(i=0;s[i];i++)
  {
    if(s[i]>='a' && s[i]<='z')
    {
      s[i]=s[i]-32;
    }
  }
  if(s[0]>='A' && s[0]<='Z')
  {
    s[0]=s[0]+32;
  }
  for(i=1;s[i];i++)
  {
    if(s[i]==' ' && s[i+1]>='A' && s[i+1]<='Z')
    {
      s[i+1]=s[i+1]+32;
    }
  }
  printf("Converted string: %s",s);
  return 0;
}

Enter a string:Naresh It ameerpet
Converted string: nARESH iT aMEERPET

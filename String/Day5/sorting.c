#include<stdio.h>
int main()

{
  char s[20],t=0;
  int i,j;
  printf("Enter a string:");
  scanf("%s",s);
  for(i=0;s[i];i++)
  {

  }
  for(i=0;s[i];i++)
  {
    for(j=i+1;s[j];j++)
    {
      if(s[i]>s[j])
      {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
      }
    }
  }
  printf("%s",s);
  return 0;
}
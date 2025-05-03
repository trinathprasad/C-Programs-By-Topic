#include<stdio.h>
int main()
{
  char s1[100],s2[100],s3[100];
  int i,j;
  puts("Enter your first name:");
  gets(s1);
  puts("Enter your last name:");
  gets(s2);
  for(i=0;s1[i];i++)
  {
    s3[i]=s1[i];
  }

  for(j=0;s2[j];i++,j++)
  {
    s3[i]=s2[j];
  }
  s3[i]='\0';

  printf("Your name is: %s",s3);
  return 0;
}
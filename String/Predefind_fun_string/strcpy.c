#include<stdio.h>
#include<string.h>
int main()
{
  char s1[20]="Hydrabad",s2[20],s3[20];
  strcpy(s2,s1);
  strncpy(s3,s1,3);
  puts(s2);
  puts(s3);

  return 0;
}
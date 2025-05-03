#include<stdio.h>
#include<string.h>
int main()
{
  char s1[30]="Charminar ", s2[30]="Charminar ", s3[30]="Hydrabad ";
  strcat(s1,s3);
  strncat(s2,s3,3);
  puts(s1);
  puts(s2);

  return 0;
}
#include<stdio.h>
#include <string.h>
int main()
{
  char s[]="abcdef";
  printf("%s addr %u\n",s,s);
  printf("c addr %u\n",strstr(s,"c"));
  printf("c addr %u\n",strstr(s,"c"));
  printf("%s ",strstr(s,"c"));
 printf("c is %d char in %s\n",strstr(s,"c")-s+1,s);
return 0;
}
#include<stdio.h>
int main()
{
  char s[5][20]={"Alia Bhatt","Shardha Kapoor","Rashmika"};
  int i;
  printf("Names:");
  printf("______________");
  for(i=0;i<5;i++)
  {
   printf("%c",s[i][i]);
  }
  return 0;
}
// Ahs
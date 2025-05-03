#include<stdio.h>
int main()
{
  char s1[]= "ab", s2[10]= "ab";
  printf("%d,%d\n",sizeof(s1), sizeof(s2));
  printf("%d,%d\n",sizeof("ab"), sizeof("Kishore Naidu"));
  printf("%d,%d\n",sizeof("ab\0"), sizeof(""));
  printf("abc addr %u\n", "abc");
  printf("%d,%d\n",sizeof("abc"+1), sizeof("abc")+1);
  printf("%d,%d\n",sizeof("1.23"), sizeof(" "));

  return 0;
}
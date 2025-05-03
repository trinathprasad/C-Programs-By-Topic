#include<stdio.h>
int main()
{
  printf("%d\n", 3==3);
  printf("%d\n",9==7);
  printf("%d\n",9==9.0);
  printf("%d\n",0.90==.9);
  printf("a addr %u\n", "a");
  printf("a addr %u\n", "a");
  printf("%d\n","a"=="a");
  printf("%d\n",'a'== 97);
  printf("%d\n", 'a'>'A');
  printf("%d\n", 'a'<='A'+32);
  printf("%d\n", 7!=7);
  printf("%d\n", 7.01>7);
  
  return 0;
}
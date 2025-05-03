#include<stdio.h>
int main()
{
  int a;
  float b;
  char c;
  printf("%d,%d,%d\n", sizeof(a), sizeof(b), sizeof(c));
  printf("%d,%d,%d\n", sizeof(int), sizeof(float), sizeof(char));
  return 0;
}
#include<stdio.h>
int main()
{
  long int n,cube;
  printf("Enter n value :");
  scanf("%d", &n);
  cube = n*n*n;
  printf("%d cube is %ld", n,cube);
  return 0;
   
}
#include<stdio.h>
#include <math.h>
int main()
{
  int n;
  printf("Enter a no :");
  scanf("%d", &n);
  printf("%d Squareroot is %f\n", n, sqrt(n));
  printf("%d squareroot is %.2f\n",n, sqrt(n));
  printf("%d sqyareroot is %d", n,(int)sqrt(n));

  return 0;
}
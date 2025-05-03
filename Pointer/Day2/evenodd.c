#include<stdio.h>
int main()
{
  int n, *p=&n;
  printf("Enter a no");
  scanf("%d",&n);
  printf(n%2==0 ? "Even" : "Odd" );
  printf(*p%2==0 ? "Even" : "Odd" );

return 0;
}
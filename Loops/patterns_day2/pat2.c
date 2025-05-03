#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the no of rows:");
  scanf("%d",&n);
  for(r=n;r>=1;r--)
  {
    for(c=r;c>=1;c--)
    {
      printf("%2d",c);
    }
    printf("\n");
  }
  return 0;
}
 5 4 3 2 1
 4 3 2 1
 3 2 1
 2 1
 1
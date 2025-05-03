#include<stdio.h>
int main()
{
  int n,r,c,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=r;c++)
    {
      printf("%2d",a++);
    }
    printf("\n");
  }
  return 0;

}

 1
 2 3
 4 5 6
 7 8 910
#include<stdio.h>
int main()
{
  int n,c,r;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=n;r>=1;r--)
  {
    for(c=1;c<=r;c++)
    {
      printf("%3d",c);
    }
    printf("\n");
  }
  return 0;
}

  1  2  3  4  5
  1  2  3  4   
  1  2  3      
  1  2
  1
#include<stdio.h>
int main()
{
  int r,a,c,nr,nc;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of column:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    a=r;  // Initialize `a` to the row number
    for(c=1;c<=nc;c++)
    {
      printf("%3d ",a++);  // Print the current value of `a` and then increment it
    }
    printf("\n");
  }
  return 0;
}

// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7 8
// 3 4 5 6 7 8 9
// 4 5 6 7 8 9 10
// 5 6 7 8 9 10 11
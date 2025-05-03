#include<stdio.h>
int main()
{
  int r,c,nc,nr;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of rows:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("%d ",r);
    }
    printf("\n");
  }
  return 0;
}
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
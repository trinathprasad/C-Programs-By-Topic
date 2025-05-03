#include<stdio.h>
int main()
{
  int c,r,nr,nc;
  printf("Enter the number of row:");
  scanf("%d",&nr);
  printf("Enter the number of row:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("%d ",c);
    }
    printf("\n");
  }
  return 0;
  
}
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
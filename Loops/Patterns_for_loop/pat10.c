#include<stdio.h>
int main()
{
  int r,c,nc,nr;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of columns:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("%c ",64+r);
    }
    printf("\n");
  }
  return 0;

}

A A A A A 
B B B B B
C C C C C
D D D D D
E E E E E
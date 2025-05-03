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
      printf("%c ",96+r);
    }
    printf("\n");
  }
  return 0;

}
a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e
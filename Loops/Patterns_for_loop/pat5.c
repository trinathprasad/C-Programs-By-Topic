#include<stdio.h>
int main()
{
  int r,c,nc,nr;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of column:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("%3d",r+c-1);
    }
    printf("\n");
  }
  return 0;
}

1  2  3  4  5  6  7  8  9 10
2  3  4  5  6  7  8  9 10 11
3  4  5  6  7  8  9 10 11 12
4  5  6  7  8  9 10 11 12 13
5  6  7  8  9 10 11 12 13 14
6  7  8  9 10 11 12 13 14 15
7  8  9 10 11 12 13 14 15 16
8  9 10 11 12 13 14 15 16 17
9 10 11 12 13 14 15 16 17 18
10 11 12 13 14 15 16 17 18 19
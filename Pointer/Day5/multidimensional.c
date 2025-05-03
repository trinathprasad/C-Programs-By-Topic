#include<stdio.h>
#include<stdlib.h>
int main()

{
  int nr,nc, r, c,**p;
  printf("Enter no of rows and columns");
  scanf("%d%d",&nr,&nc);
  p=(int**)calloc(nr, sizeof(int));

  for(r=0;r<nr;r++)
  p[r]=(int *)calloc(nc,sizeof(int));

  printf("Enter %d integeres\n",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&p[r][c]);
    }
  }
  printf("Elements are:\n");
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      printf("%3d",p[r][c]);
    }
    printf("\n");
    free(p[r]);
    p[r]=0;
  }
  free(p);
  p=NULL;

  return 0;
}
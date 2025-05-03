#include<stdio.h>
int main()
{
  int a[10][10]={0},nr,nc,r,c,rs,cs;
  printf("Enter the number of rows and colums:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d elements:",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }
  for(r=0;r<nr;r++)
  {
    for(c=rs=cs=0;c<nc;c++)
    {
      rs+=a[r][c];
      cs+=a[c][r];
    }
    a[r][c]=rs;
    a[c][r]=cs;
  }
  printf("Elements are:");
  for(r=0;r<=nr;r++)
  {
    for(c=0;c<=nc;c++)
    {
      if(r==nr && c==nc) ;
      else{
        printf("%4d",a[r][c]);
      }
    }
    printf("\n");
  }
  return 0;
}
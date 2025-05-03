#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c,s=0;
  printf("Enter the size of row and columns:");
  scanf("%d%d",&nr,&nc);
  if(nr==nc)
  {
    printf("Enter %d elements",nr*nc);
    for(r=0;r<nr;r++)
    {
      for(c=0;c<nc;c++)
      {
        scanf("%d",&a[r][c]);
        if(r+c==nr-1) s+=a[r][c];
      }
    }
    printf(" Right Trace=%d",s);
  }
  else{
    printf("The number of rows and columns should be same .");
  }
  return 0;
}


// Enter the size of row and columns:3 3
// Enter 9 elements1 2 3
// 4 5 6
// 7 8 9
// Right Trace=15
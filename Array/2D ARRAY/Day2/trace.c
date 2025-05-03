#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c,s=0;
  printf("Enter the size of rows and columns");
  scanf("%d%d",&nr,&nc);
  if(nr==nc)
  {
  printf("Enter %d elements:\n",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&a[r][c]);
      if(r==c) s+=a[r][c];
    }
  }
  printf("Trace=%d",s);
}

else{
  printf("Rows and column should be same");
}
return 0;
}

// Enter the size of rows and columns4 4
// Enter 16 elements:
// 1 2 3 4
// 3 4 2 1
// 5 2 4 1
// 0 1 2 3
// Trace=12
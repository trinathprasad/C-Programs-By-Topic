#include<stdio.h>
int main()
{
  int a[10][10],nr,nc,r,c,e,o,z;
  printf("Enter no of rows and columns:");
  scanf("%d%d",&nr,&nc);
  printf("Enter %d elements:\n",nr*nc);
  for(r=0;r<nr;r++)
  {
    for(c=0;c<nc;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }
  printf("\tEven\tOdd\tZero");
  printf("_________________________________________");
  for(c=0;c<nc;c++)
  {
    for(e=o=z=r=0;r<nr;r++)
    {
      if(a[r][c]==0)
      {
        z++;
      }else if(a[r][c]%2==0){
        e++;
      }else{
        o++;
      }
    }
    printf("%d-col\t%d\t%d\t%d\n",c+1,e,o,z);
  }
  return 0;
}
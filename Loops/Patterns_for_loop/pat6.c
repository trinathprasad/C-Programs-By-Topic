#include<stdio.h>
int main()
{
  int r,c,nc,nr,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of column:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      if(r%2==0)
      {
        printf("%2d",--a);
      }else{
        printf("%2d",a++);

      }
    }
    printf("\n");
  }
  return 0;
}

//  1 2 3 4
//  4 3 2 1
//  1 2 3 4
//  4 3 2 1
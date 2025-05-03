#include<stdio.h>
int main(){
  int r,c,nc,nr;
  printf("Enter the number of row:");
  scanf("%d",&nr);
  printf("Enter the number of column:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

* * * * * * 
* * * * * *
* * * * * *
* * * * * *
* * * * * *
#include<stdio.h>
int main()
{
  int n,r,c;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n;c++)
      {
        if(r==c){
          printf("1 ");
        }else if(r>c)
        {
          printf("2 ");
        }else{
          printf("0 ");
        }

      }
      printf("\n");
  }
  return 0;
}

1 0 0 
2 1 0
2 2 1
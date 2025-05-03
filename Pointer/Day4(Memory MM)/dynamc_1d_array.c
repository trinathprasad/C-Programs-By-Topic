#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,*p;
  
  printf("Enter the size of the array:");
  scanf("%d",&n);

  p=(int *) malloc(n*sizeof(int));

  printf("Enter %d integers",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&p[i]);
  }

  printf("Elements");
  for(i=0;i<n;i++)
  {
    printf("%4d",p[i]);
  }

  free(p);
  p=NULL;


  return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()

{
  int *p,s1,s2,i;
  printf("Enter the size of array:");
  scanf("%d",&s1);
  p=(int*)calloc(s1, sizeof(int));

  printf("Enter %d integeres\n",s1);
  for(i=0;i<s1;i++)
  {
      scanf("%d",p+i);
  }
  printf("Elements the number of cell you want to add:");
  scanf("%d",&s2);

  p=(int*) realloc(p,(s1+s2)*sizeof(int));

  printf("Enter the %d elements",s2);
  for(i=s1;i<s1+s2;i++)
  {
    scanf("%3d",p+i);
  }
  
  printf("Elements are:");
  for(i=0;i<s1+s2;i++)
  {
    printf("%4d",*(p+i));
  }
  free(p);
  p=NULL;

  return 0;
}
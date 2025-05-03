#include<stdio.h>
int main()
{
  int a[100],i,n,ele,f=0;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element you want to delete:");
  scanf("%d",&ele);
  for(i=0;i<n;i++)
  {
    if(a[i]!=ele)
    {
       printf("%3d",a[i]);
    }else{
      f=1;
    }
  }
  if(f==0)
  {
    printf("\n%d not found",ele);
  }
return 0;
}
#include<stdio.h>
int main()
{
  int a[100],n,i,j,t,ele,pos;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements: ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  
  printf("\nEnter the position and element: ");
  scanf("%d%d",&pos,&ele);
  if(pos<1||pos>n+1)
  {
    printf("position 1 to %d only",n+1);
  }
  else{
  for(i=n;i>=pos;i--)
  {
    a[i]=a[i-1];
  }
  a[i]=ele;

  printf("\nElements are:");
  for(i=0;i<=n;i++)
  {
    printf("%3d",a[i]);
  }
}

  return 0;
}
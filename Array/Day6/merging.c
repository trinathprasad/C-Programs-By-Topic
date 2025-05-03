#include<stdio.h>
int main()
{
  int a[100],b[100],i,j,s1,s2;
  printf("Enter 1st array size:");
  scanf("%d",&s1);
  printf("Enter %d elements",s1);
  for(i=0;i<s1;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter 2nd array size:");
  scanf("%d",&s2);
  printf("Enter %d elements",s2);
  for(i=0;i<s2;i++)
  {
    scanf("%d",&b[i]);
  }
  for(j=0,i=s1;j<s2;j++,i++)
  {
    a[i]=b[j]; //merging
  }
  for(i=0;i<s1+s2;i++)
  {
    for(j=i+1;j<s1+s2;j++)
    {
      if(a[i]>a[j])
      {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  printf
  ("Elements are:");
  for(i=0;i<s1+s2;i++)
  {
    printf("%3d",a[i]);
  }
  return 0;


}
// Enter 1st array size:4
// Enter 4 elements 1 0 3 9
// Enter 2nd array size:5
// Enter 5 elements-3  7 9 -2 4
// Elements are: -3 -2  0  1  3  4  7  9  9
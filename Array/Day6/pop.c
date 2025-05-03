#include<stdio.h>
int main()
{
  int a[100],n,i,j,f=0,ele;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0; i<n ;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Enter the number you want to delete:");
  scanf("%d",&ele);

  for(i=0; i<n ;i++)
  {
    if(a[i]==ele)
    {
      f=1;
      for(n--,j=i;j<n;j++)
      {
        a[j]=a[j+1];
        
      }
      i--;
    }
  }
  if(f==0)
  {
    printf("%d not found",ele);
  }else{
    printf("Elements :");
    for(i=0;i<n;i++)
    {
      printf("%3d",a[i]);
    }
  }
  return 0;
}
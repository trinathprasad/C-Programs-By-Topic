#include<stdio.h>
int main()

{
  int a[30],n,i,j,t;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
  printf("After sorting:");
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  for(i=1;i<n;i++)
  {
    if(a[i]>a[0])
    {
      printf("\n2nd min=%d",a[i]);
      break;
    }
  }
    for(i=n-2;i>=0;i--)
    {
      if(a[i]<a[n-1])
      {
        printf("\n2nd max=%d\n",a[i]);
        break;
      }
    }
    return 0;

  }


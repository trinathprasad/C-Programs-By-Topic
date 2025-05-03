#include<stdio.h>
int main()
{
  int a[100],n,i,j,k;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[j]==a[i])
      {
        for(n--,k=j;k<n;k++)
        {
          a[k]=a[k+1];
        }
        j--;
      }
    }
  }
  printf("Elements:");
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  return 0;

}

// Enter the size of the array:6
// Enter 6 elements:1 2 3 1 1 2
// Elements:  1  2  3
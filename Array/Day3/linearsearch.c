#include<stdio.h>
int main()
{
  int a[100],i,n,c=0,s;
  printf("Enter array size: ");
  scanf("%d",&n);
  printf("Enter %d elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Enter the element to search:");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
    if(a[i]==s)
    {
      printf("%d in %d cell\n",s,i+1);
      c++;
    }
  }
  if(c==0)
  {
    printf("%d not found",s);
  }else{
    printf("\n%d found %d times",s,c);
  }
  return 0;
}
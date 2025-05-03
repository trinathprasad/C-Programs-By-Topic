#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a, b, c values");
  scanf("%d %d %d", &a, &b, &c);

  if(a==b && a==c)
  {
    printf("All are equal");
  }
  else if(a>b && a>c)
  {
    printf("a is big");
  }
  else if(a==b && a>c)
  {
    printf("a and b are equal");
  }
  else if(b==c && b>a)
  {
    printf("b and c are equal");
  }
  else if(a==c && a>b)
  {
    printf("a and c are equal");
  }
  else if(b>c)
  {
    printf("b is big");
  }
  else{
    printf("c is big");
  }
  
  return 0;
}
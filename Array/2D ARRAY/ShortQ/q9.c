#include<stdio.h>
int main()

{
  int a[2][3]={{1},2,{3,4}},r,c;
  printf("Elements are:\n");
  for(r=0;r<2;r++)
  {
    for(c=0;c<3;c++)
    {
      printf("%4d",a[r][c]);
    }
    printf("\n");
  }
  return 0;
}

// in c/c++ - the ans willbe  error 

// in vscode- warning
// Elements are:
//    1   0   0
//    2   3   0
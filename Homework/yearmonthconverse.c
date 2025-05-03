#include<stdio.h>
int main()
{
  int tdays, y,  m, w, d;
  printf("Enter baby age in days :");
  scanf("%d", &tdays);

  y=tdays/365;
  m=tdays%365/30;
  w=tdays%365%30/7;
  d=tdays%365%30%7;

  printf("Baby age %d years, %d months, %d weeks and %d days", y,m,w,d);

  return 0;
}
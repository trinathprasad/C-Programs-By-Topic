#include<stdio.h>
int main()
{
  int tdays, y, m, w,d;
  printf("Enter baby age in years, months, weeks and days");
  scanf("%d %d %d %d", &y, &m, &w, &d);
  tdays= y*365+m*30+w*7+d;
  printf("Baby age %d days", tdays);
  return 0;
}
#include<stdio.h>
int main()
{
  float p,r,si,tot;
  int t;
  printf("Enter amount, time and rate of intrest");
  scanf("%f %d %f", &p, &t, &r);

  si=p*t*r/100;
  tot=p+si;
  printf("si=%.2f, Total=%.2f", si,tot);

  return 0;
}
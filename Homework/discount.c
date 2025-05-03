#include<stdio.h>
int main()
{
  int id;
  char name[30];
  float qty, rate, amount, dis, tot;

  printf("Enter consumer id, name, quatity purchased and rate of the item");
  scanf("%d %s %f %f", &id, name, &qty, &rate);
  amount= qty * rate;
  dis= amount * 35/100;
  tot = amount - dis;
  printf("Amount=%.2f, Discount=%.2f, Total=%.2f", amount, dis, tot);

  return 0;
}
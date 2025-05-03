#include<stdio.h>
int main()
{
  int id;
  char name[30];
  float qty, rate, amount, disc, tot;

  printf("Enter consumer id, name, quatity purchased and rate of the item");
  scanf("%d %s %f %f", &id, name, &qty, &rate);

  amount= qty * rate;
  printf("Amount=%.2f\n", amount);
  printf("Enter discount percentage:");
  scanf("%f", &disc);

  disc= amount * disc/100;
  tot = amount - disc;

  printf("Discount=%.2f, Total=%.2f", disc, tot);

  return 0;
}
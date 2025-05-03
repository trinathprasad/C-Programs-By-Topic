#include<stdio.h>
int main()
{
  float sales, basic=10000, da=basic*65.5/100, bonus, comm,gross;

  printf("Enter the sales value:");
  scanf("%f",&sales);

  if(sales>=100000)
  {
    bonus= 10000;
    comm= sales*10/100;
  }
  else
  {
    bonus= 2000;
    comm= sales*5/100;
  }
  gross= basic+ da + bonus + comm;
  printf("Basic=%.2f\n", basic);
  printf("DA=%.2f\n",da);
  printf("Bonus=%.2f\n",bonus);
  printf("commision=%.2f\n",comm);
  printf("Gross=%.2f\n", gross);

  return 0;
}
#include<stdio.h>
int main()
{
  long serno, pre, cur, unit;
  char name[30];
  float amt;
  printf("Enter the serial no of the bill:");
  scanf("%ld", &serno);

  printf("Enter your registered name:");
  scanf("%s", &name);

  printf("Enter your previous month reading:");
  scanf("%ld", &pre);

  printf("Enter your current month reading:");
  scanf("%ld", &cur);

  unit= cur - pre;

  if(unit<=50)
  {
   amt=unit*1.45; 
  }
 else if(unit<=100)
  {
    amt=50*1.45+(unit-50)*2.8;
  }
  else if(unit<=200)
  {
    amt=50*1.45+50*2.8+(unit-100)*3.05;
  }
  else if(unit<=300)
  {
    amt=50*1.45+50*2.8+100*3.05+(unit-200)*4.75;
  }
  else 
  {
    amt=50*1.45+50*2.8+100*3.05+100*4.75+(unit-500)*6.25;
  }
  if(amt<50)
  {
    amt=50;
  }
printf("Amount=%.2f",amt);

return 0;

}
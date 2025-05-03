#include<stdio.h>
int main()
{
  int age;
  char gen;

  printf("Enter your age:");
  scanf("%d", &age);

  printf("Enter your gender:");
  scanf(" %c", &gen);

  if(gen =="m" || gen=='M' || gen=='f' || gen=='F')
  {
    if(age>=21 || (gen=='f' || gen=='F') && age>=18)
    {
      printf("Eligible for marriage");
    }
    else
    {
      printf("Not eligible for marriage");
    }
  }
    else 
    {
      ("Invalid Gender");
    }
  
  return 0;
}
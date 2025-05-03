#include<stdio.h>
int main()
{
  char s[5][100]; int i;
  printf("Enter 5 names:");
  for(i=0;i<5;i++)
  {
    gets(s[i]);
  }
  printf("Names:\n");
  for(i=0;i<5;i++)
  {
    puts(s[i]);
  }
  return 0;
}
// Enter 5 names:
// Virat Kohli
// Gautam Gambhir
// Rohit sharma
// Shubhman gill
// Ms dhoni


// Names:
// Virat Kohli
// Gautam Gambhir
// Rohit sharma
// Shubhman gill
// Ms dhoni
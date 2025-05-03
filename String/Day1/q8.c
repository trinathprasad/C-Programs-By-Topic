#include<stdio.h>
int main()
{
  char s[5][20]={"Alia Bhatt","Shardha Kapoor","Rashmika Mandana","Janvi Kapoor"};
  int i;
  printf("Names:");
  for(i=0;i<5;i++)
  {
    puts(s[i]);
  }
  return 0;
}

// Names:
// Alia Bhatt
// Shardha Kapoor
// Rashmika Mandana
// Janvi Kapoor

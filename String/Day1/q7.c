#include<stdio.h>
int main()
{
  char s1[2]="K",s2[]="K",s3[2]={'K'},s4[]={'G','\0'},s5[]={'G'};
  puts(s1);
  puts(s2);
  puts(s3);
  puts(s4);
  puts(s5);

}
// K
// K
// K
// G
// G & Garbage
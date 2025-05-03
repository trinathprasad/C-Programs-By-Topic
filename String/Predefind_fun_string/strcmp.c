#include<stdio.h>
int main()
{
  printf("%d\n",strcmp("ab","ab"));
  printf("%d\n",strcmp("ab","Ab"));
  printf("%d\n",strcmp("Ab","ab"));
  printf("%d\n",strcmp("abc","ab"));
  printf("%d\n",strcmp("ab","abc"));
  printf("%d\n",strcmp("ab","1234"));

return 0;
}

//  0
//  1
// -1
//  1
// -1
//  1
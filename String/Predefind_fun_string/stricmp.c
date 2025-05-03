#include<stdio.h>
#include<string.h>
int main()
{
  printf("%d\n",stricmp("ab","ab"));
  printf("%d\n",stricmp("ab","Ab"));
  printf("%d\n",stricmp("Ab","ab"));
  printf("%d\n",stricmp("abc","ab"));
  printf("%d\n",stricmp("ab","abc"));
  printf("%d\n",stricmp("ab","1234"));

return 0;
}


// 0
// 0
// 0
// 1
// -1
// 1
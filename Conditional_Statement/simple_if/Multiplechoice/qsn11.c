#include <stdio.h>
int main() {
int i = 0;
if(printf("%d",i++))
{
printf("%d",i);
}
else{
printf("%d",i++);
}
if(printf(""))
{
printf("%d",i);
}
return 0;
}/*01*/
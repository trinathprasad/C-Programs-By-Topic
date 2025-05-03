#include<stdio.h>
#include<math.h>
int main()
{
float a, b; char op;
start:

printf("----------------------------------------------------------------");
printf("Enter two numbers "); scanf("%f %f",&a,
&b);

printf("----------------------------------------------------------------");

printf("\t\t\t M E N U");

printf("-------------------------------------------------------------
---");

printf("\t\t\t +. Add");
printf("\t\t\t -. Sub");
printf("\t\t\t *. Pro");
printf("\t\t\t %. Mod");
printf("\t\t\t /. Div");
printfs("\t\t\t ^. Pow");
printf("\t\t\t E. Exit");


printf("----------------------------------------------------------------");
printf("\t\t\t Enter Ur option[ ]\b\b");fflush(stdin);
scanf("%c",&op);

switch(op)
{
case '+': printf("Sum=%.2f",a+b);break;
case '-': printf("Sub=%.2f",a-b);break;
case '*': printf("Mul=%.2f",a*b);break;
case '%': printf("Mod=%.2f",fmod(a,b));break;
case '/': printf("Div=%.2f",a/b);break;
case '^': printf("Pow=%.2f",pow(a,b));break;
case 'e': case 'E': return 0;
default: puts("Invalid option");
}

goto start;
return 0;
}
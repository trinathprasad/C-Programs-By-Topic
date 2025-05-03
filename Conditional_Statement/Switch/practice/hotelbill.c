#include<stdio.h>
int main()
{
int qty, amt=0, op;
start:


puts("****************************************************************");
puts("\t\t HOTEL SAI KRISH");
puts("\t\t AMEERPET - HYD");
puts("****************************************************************");
puts("\t\t 1. Tea - 10/-");
puts("\t\t 2. Coffee - 20/-");
puts("\t\t 3. Idly/Bonda/poha/upma/plain dosa -30/-");
puts("\t\t 4. Upma/masala/Onion dosa/Sambaridly/poori/wada - 40/-");
puts("\t\t 5. Paneer Dosa / Veg biryani / Sambarwada - 50/-");
puts("\t\t 6. Bill");
puts("\t\t 7. Cancel");
puts("\t\t 8. Close");

puts("****************************************************************");
printf("\t\t Enter Ur option[]\b\b");
scanf("%d",&op);

if(op<=5){printf("Enter Quanity");
scanf("%d",&qty);}
switch(op)
{
case 1: amt+=10*qty; break;
case 2: amt+=20*qty; break;
case 3: amt+=30*qty; break;
case 4: amt+=40*qty; break;
case 5: amt+=50*qty; break;
case 6: printf("Ur billed amount=%d",amt); break;
case 7: printf("Ur order cancelled",amt=0); break;

case 8: return 0;
default: puts("Invalid choice");
}
goto start;

return 0;
}

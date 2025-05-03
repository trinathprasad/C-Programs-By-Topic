#include<stdio.h>
int main()
{
  int r,c,nc,nr;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of columns:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      if(r%2==0){
        printf("%2c",96+c);
      }else{
        printf("%2c",64+c);
      }
    }
    printf("\n");
  }
  return 0;

}
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
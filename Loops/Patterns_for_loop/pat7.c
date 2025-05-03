#include<stdio.h>
int main()
{
  int r,c,nc,nr,a=1;
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of column:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {
      printf("%2c",c+64);
    }
    printf("\n");
  }
  return 0;
}

A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
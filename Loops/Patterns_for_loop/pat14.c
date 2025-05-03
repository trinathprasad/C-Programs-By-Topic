#include<stdio.h>
int main()
{
  int r,c,nc,nr;
  char L='a',U='A';
  printf("Enter the number of rows:");
  scanf("%d",&nr);
  printf("Enter the number of columns:");
  scanf("%d",&nc);
  for(r=1;r<=nr;r++)
  {
    for(c=1;c<=nc;c++)
    {  
if(r%2==0){
  printf("%2c",L);
}else{
  printf("%2c",U);
}
    }
    printf("\n");
    if(r%2==0)
    {
      L++;
    }else{
      U++;
    }
  }
  return 0;
}

 A A A A A A A A A A A A A A
 a a a a a a a a a a a a a a
 B B B B B B B B B B B B B B
 b b b b b b b b b b b b b b
 C C C C C C C C C C C C C C
 c c c c c c c c c c c c c c
 D D D D D D D D D D D D D D
 d d d d d d d d d d d d d d
 E E E E E E E E E E E E E E
 e e e e e e e e e e e e e e
 F F F F F F F F F F F F F F
 f f f f f f f f f f f f f f
 G G G G G G G G G G G G G G
 g g g g g g g g g g g g g g
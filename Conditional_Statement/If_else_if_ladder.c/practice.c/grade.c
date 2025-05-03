#include<stdio.h>
int main()
{
  int id,odia,hin,eng,mat,sci,soc;
  char name[20];
  float total, avg;

  printf("Enter student id,name, 6 subject marks:");
  scanf("%d%s%d%d%d%d%d%d",&id,name, &odia, &hin, &eng, &mat, &sci, &soc);
  total=odia+hin+eng+mat+sci+soc;
  avg=total/6.0;
  printf("ID\tNAME\tTOTAL\tAVG\tGRADE");
  printf("--------------------------------------------------------\n");
  printf("%d\t%s\t%.2f\t%.2f\t",id,name,total,avg);
  if(odia>=35 && hin>=35 && eng>=35 && mat>=35 && sci>=35 && soc>=35 )
  {
    if(avg>=75)
    {
      printf("Disticton");
    }else if(avg>=60){
      printf("1st class");
    }else if(avg>=50){
      printf("2nd class");
    }else{
      printf("3rd class");
    }

  }
  else{
    printf("failed");
  }
return 0;
}
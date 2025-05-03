// #include<stdio.h>
// int main()
// {
//   int i;
//   for(i=1;i<=10;i++)
//   {
//     printf("%d\n",i);
//   }
//   printf("Thank you");
//   return 0;
// } 





// #include<stdio.h>
// int main()
// {
//   int i;
//   for(i=1;i<=10;i++)
//   {
//     if(i==6) break;
//     printf("%d\n",i);
//   }
//   printf("Thank you");
//   return 0;
// } 





// #include<stdio.h>
// int main()
// {
//   int i;
//   for(i=1;i<=10;i++)
//   {
//     if(i==3 || i==7) continue;
//     printf("%d\n",i);
//   }
//   printf("Thank you");
//   return 0;
// } 




// #include<stdio.h>
// int main()
// {
//   int i;
//   for(i=1;i<=10;i++)
//   {
//     if(i%2 !=0) continue;
//     printf("%d\n",i);
//   }
//   return 0;
// } 




// #include<stdio.h>
// int main()
// {
//   int i;
//   for(i=1;i<=10;i++)
//   {
//     if(i%2==0) continue;
//     printf("%d\n",i);
//   }
//   return 0;
// } 




// #include<stdio.h>
// int main()
// {
//   int i;
//   while( )
//   {
//     printf("%d\n",i++);
//   }
//   return 0;
// } error because we can leave the while condition blank


// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(i++)
//   {
// printf("%d\t",i);
//   }
//     printf("%d\n",i++);

//   return 0;
// }




// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(++i);
//   {
// printf("%d\t",i);
//   }
//     printf("%d\n",++i);

//   return 0;
// } 0 1





// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(++i)
//   {
// printf("%d\t",i);
//   }
//   return 0;
// } 1 to infinite



// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(++i);
//   {
//   printf("%d\t",i);
//   }
//   return 0;
// } 0





// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(i<5)
//   {
// printf("%d\t",i);
//   }
//   return 0;
// } 0 infinite times







// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(i<=5)
//   {
// printf("%d\n",i++);
//   }
//   printf("%d\n",i);
//   return 0;
// } 0-6







// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(i<=5)
//   {
// printf("%d\n",++i);
//   }
//   printf("%d\n",i);
//   return 0;
// } 1234566



// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(i++<=5)
//   {
//   printf("%d\n",i);
//   }
//   printf("%d\n",++i);
//   return 0;
// }
// } 1234568






// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(++i<=5);
//   {
//    printf("%d\n",i);
//   }
//   printf("%d\n",++i);
//   return 0;
// } 6 7





// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(i++<=5);
//   {
//    printf("%d\n",i);
//   }
//   printf("%d\n",++i);
//   return 0;
// } 7 8





// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(1)
//   {
//     printf("%d\n",i++);
//   }
//   return 0;
// } 0 to infinite 







// #include<stdio.h>
// int main()
// {
//   int i=0,a;
//   while(a=i++)
//   {
//     printf("%d\n",i++);
//   }
//   return 0;
// } blank screen





// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(i<=printf("Indian"))
//   {
//     printf("%d",i++);
//   }
//   printf("%d",i);
//   return 0;
// } Indian0 Indian1 Indian2 Indian3 Indian4 Indian5 Indian6 Indian7







// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(printf("Indian")-i)
//   {
//     printf("%d",i++);
//   }
//   printf("%d",i);
//   return 0;
// }Indian0 Indian1 Indian2 Indian3 Indian4 Indian5 Indian6






// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(sizeof (printf("Indian"))-i)
//   {
//     printf("%d",i++);
//   }
//   printf("%d",i);
//   return 0;
// } 01234






// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(printf("%d",printf("Indian"))-i)
//   {
//     printf("%d",i++);
//   }
//   printf("%d",i);
//   return 0;
// }  Indian60 Indian61






// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(sizeof("Indian")-i)
//   {
//     printf("%d",i++);
//   }
//   printf("%d",i);
//   return 0;
// } 01234567






// #include<stdio.h>
// int main()
// {
//   int i=0;
//   while(printf("Indian"+i))
//   {
//     printf("%d",i++);
//   }
//   printf("%d",i);
//   return 0;
// } Indian0 ndian1 dian2 ian3 an4 n5 6







// #include<stdio.h>
// int main()
// {
//   int i=0;
//   do{
//     printf("%d",i);

//   }while(i++);
//   {
//     printf("%d",++i);
//   }
//   return 0;
// } 0 2




// #include<stdio.h>
// int main()
// {
//   int i=0;
//   for( ; i=1 ; );
//   {
//     printf("%d\n",i);
//   }
//   printf("%d",++i);
//   return 0;
// } infinite blank






// #include<stdio.h>
// int main()
// {
//   int i=0;
//   for(i++ ; i<=10 ;i++)
//   {
//     printf("%d",++i);
//   }
//   return 0;
// }2 4 6  8 10



// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for( i=10,j=10; i<=12,j<=13 ;i++,j++ )
//   {
//     printf("%d%d",i,j);
//   }
//   return 0;
// }10 10, 11 11, 12 12, 13 13




// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for( i=10,j=10; i<=13,j<=12 ;i++,j++ )
//   {
//     printf("%d%d",i,j);
//   }
//   return 0;
// }
// } 10 10, 11 11, 12 12







// #include<stdio.h>
// int main()
// {
//   int i=0;
//   for( i++; printf("Ente a no")>i;printf("i=%d",i) )
//   {
//     scanf("%d",&i);
//   }
//   return 0;
// } when the use input a no greter than 11, the program will be stop.





// #include<stdio.h>
// int main()
// {
//   int i=0;
//   for(  ; printf("Enter a no")-i;printf("i=%d",i) )
//   {
//     scanf("%d",&i);
//   }
//   return 0;
// }when the use input a no 10, the program will be stop.








// #include<stdio.h>
// int main()
// {
//   int i=0;
//   for( i++ ; ;printf("i=%d\n",i) )
//   {
//     printf("Enter a number");
//     scanf("%d",&i);
//   }
//   return 0;
// } infinite





// #include<stdio.h>
// int main()
// {
//   int i=0;
//   for( printf("Enter a no");printf("i=%d",&i); )
//   {
//     printf("i=%d\n",i);
//     printf("Enter a no:");
//   }
//   return 0;
// }





// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++)
//   {
//     for(j=1;j<=5;j++)
//     {
//       if(j>i)break;
//       printf("%3d",j);
//     }
//     printf("\n");
//   }
//   return 0;
// }
//   1
//   1  2
//   1  2  3
//   1  2  3  4
//   1  2  3  4  5





// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++)
//   {
//     if(i%3==0)continue;
//     for(j=1;j<=5;j++)
//     {
//       printf("%3d",i);
//     }
//     printf("\n");
//   }
//   return 0;
// }

//   1  1  1  1  1
//   2  2  2  2  2
//   4  4  4  4  4
//   5  5  5  5  5






// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for(i=1;i<=10;i++)
//   {
//     if(i%3==0)continue;
//     for(j=1;j<=10;j++)
//     {
//       if(j%i==0) break;
//       printf("%3d",i);
//     }
//     printf("\n");
//   }
//   return 0;
// }


  2
  4  4  4
  5  5  5  5
  7  7  7  7  7  7
  8  8  8  8  8  8  8
 10 10 10 10 10 10 10 10 10






/* Program 2:- WAP to print  ****
                              *** 
                               **  
                                *    */

#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
  for(j=1;j<=4;j++)
  {
     if(j<=(i-1))
          printf(" ");
     else
          printf("*");
  }
printf("\n");
}
}

/* Program 9:- WAP to print     *
                               * *
                              * * *  
                             * * * *      
                            * * * * *     */

#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
  for(j=1;j<=5;j++)
  {
     if(j<=(5-i))
          printf(" ");
     else
          printf("* ");
  }
printf("\n");
}
}

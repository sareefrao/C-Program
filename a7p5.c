/* Program 5:- WAP to print     *
                               ***
                              *****  
                             *******       */

#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
  for(j=1;j<=7;j++)
  {
     if(j<=(4-i) ^ j>=(i+4) )
          printf(" ");
     else
          printf("*");
  }
printf("\n");
}
}

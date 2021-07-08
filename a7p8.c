/* Program 8:- WAP to print     1
                               121
                              12321  
                             1234321       */

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
          printf("%d",j);
  }
printf("\n");
}
}

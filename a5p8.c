/* Program 8:- WAP to print table of user's choice.*/

#include<stdio.h>
int main ()
{
int i,n,m;

printf("Enter a Number:\n");
scanf("%d",&n);

printf("Table of %d is:-\n",n);

for(i=1;i<=10;i++)
{
 m=n*i;
 printf("%d x %d = %d \n",n,i,m);
}
}

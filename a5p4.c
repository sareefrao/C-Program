/* Program 4:- WAP to calculate factorial of a given number.*/

#include<stdio.h>
int main ()
{
int i,n,fact;
fact=1;

printf("Enter a Number:\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
 fact=fact*i;
}
printf("Factorial of %d  is %d.\n",n,fact);
}

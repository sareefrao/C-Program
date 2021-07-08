/* Program 1:- WAP to calculate sum of squares of first N natural numbers.*/

#include<stdio.h>
int main ()
{
int i,a,n,sum;
sum=0;

printf("Enter a Number:\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
 a=i*i;
 sum=sum+a;
}
printf("Sum of Squares of first %d Natural numbers is %d.\n",n,sum);
}

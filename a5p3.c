/* Program 3:- WAP to calculate sum of first N odd natural numbers.*/

#include<stdio.h>
int main ()
{
int i,a,n,sum;
sum=0;

printf("Enter a Number:\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
 a=i*2-1;
 sum=sum+a;
}
printf("Sum of first %d Odd Natural numbers is %d.\n",n,sum);
}

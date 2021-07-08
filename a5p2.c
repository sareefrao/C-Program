/* Program 2:- WAP to calculate sum of cubes of first N natural numbers.*/

#include<stdio.h>
int main ()
{
int i,a,n,sum;
sum=0;

printf("Enter a Number:\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
 a=i*i*i;
 sum=sum+a;
}
printf("Sum of Cubes of first %d Natural numbers is %d.\n",n,sum);
}

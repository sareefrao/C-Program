/* Program 6:- WAP to calculate sum of digits of a givan number.*/

#include<stdio.h>
int main ()
{
int i,a,n,sum;
sum=0;

printf("Enter a Number:\n");
scanf("%d",&n);
i=n;

while(i!=0)
{
 a=i%10;
 sum=sum+a;
 i=i/10;
}
printf("Sum of digits of  %d is %d.\n",n,sum);
}

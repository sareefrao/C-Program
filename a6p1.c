/* Program 1:- WAP to check whether a given number is prime or not.*/

#include<stdio.h>
int main()
{
 int i,n;
printf("Enter a Number:\n");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
 if(n%i==0)
    break;
}
if(i==n)
    printf("Prime number.\n");
else
    printf("Not Prime number\n");
}

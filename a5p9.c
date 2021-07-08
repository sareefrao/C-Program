/* Program 9:- WAP to print first N terms of a Fibonacci series.*/

#include<stdio.h>
int main ()
{
int i,a,n,s,m=0;
printf("Enter total no. of elements of Fibonacci series:\n");
scanf("%d",&n);

printf("Enter two Numbers:\n");
scanf("%d%d",&a,&s);

printf("Fibonacci Series is :-\n");

for(i=1;i<=n;i++)
{
 m=a+s;
 printf("%d ",m);
 a=s;
 s=m;
}
printf("\n");
}

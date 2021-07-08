/* Program 7:- WAP to reverse  a number.*/

#include<stdio.h>
int main ()
{
int i,a,n,s;
s=0;

printf("Enter a Number:\n");
scanf("%d",&n);
i=n;

while(i!=0)
{
 a=i%10;
 s=s*10+a;
 i=i/10;
}
printf("Reverse of %d is %d.\n",n,s);
}

/* Program 5:- WAP to count digits in a givan number.*/

#include<stdio.h>
int main ()
{
int i,a,n,count;
count=0;

printf("Enter a Number:\n");
scanf("%d",&n);
i=n;

while(i!=0)
{
 i=i/10;
 count++;
 
}
printf("Total digits in %d is %d.\n",n,count);
}

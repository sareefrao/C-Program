/* Program 9:- WAP to print all factors of a given number.*/

#include<stdio.h>
int main()
{
 int i,n,a,b;
printf("Enter a Number:\n");
scanf("%d",&a);

printf("All Factors of given number are:-\n");

for(i=1;i<=a;i++)
{
 n=a/i;
 if(n*i==a)
    printf("%d x %d \n",i,n);
 else
    continue;
} 


}

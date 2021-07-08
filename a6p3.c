/* Program 3:- WAP to print all prime numbers between two numbers.*/

#include<stdio.h>
int main()
{
 int i,n,a,b;
printf("Enter two Number:\n");
scanf("%d%d",&a,&b);

printf("Prime numbers between %d and %d are:-\n",a,b);

for(n=a;n<=b;n++)
{
 for(i=2;i<=n-1;i++)
{
 if(n%i==0)
    break;
}
if(i==n)
    printf("%d ",n);
}
printf("\n");
}

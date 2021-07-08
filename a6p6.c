/* Program 6:- WAP to print N prime numbers.*/

#include<stdio.h>
int main()
{
 int i,n,a,b;
printf("Enter a Number:\n");
scanf("%d",&a);

printf("Prime number till %d are:-\n",a);

for(n=2;n<=a;n++)
{
 for(i=2;i<=n;i++)
{
 if(n%i==0)
    break;
}
if(i==n)
    printf("%d ",n);

}
printf("\n");
}

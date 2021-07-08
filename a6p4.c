/* Program 4:- WAP to print next prime number of given number.*/

#include<stdio.h>
int main()
{
 int i,n,a,b;
printf("Enter a Number:\n");
scanf("%d",&a);

printf("Prime number next of %d is:-\n",a);

for(n=a+1;n<=(a+2);n++)
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

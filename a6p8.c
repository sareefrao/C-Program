/* Program 8:- WAP to calculate HCF of two numbers.*/

#include<stdio.h>
int main()
{
 int i,n,a,b;
printf("Enter two Numbers:\n");
scanf("%d%d",&a,&b);

printf("HCF of two Numbers is:-\n");

n=a%b;
while(n!=0)
 {
  n=a%b;
  a=b;
  b=n;
  }
printf("%d \n",a);

}

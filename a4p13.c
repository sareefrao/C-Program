/* Program 13:- WAP to print squares of first N  natural numbers .*/

# include<stdio.h>

int main()
{
int i,n,a;
i=1;

printf("Enter a Number:\n");
scanf("%d",&n);

printf("Square of 1 to %d Natural numbers:-\n",n);

while(i<=n)
{

 a=i*i;
 printf("%d\n",a);
 i++;
}
}

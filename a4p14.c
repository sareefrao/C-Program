/* Program 14:- WAP to calculate sum of first N natural numbers .*/

# include<stdio.h>

int main()
{
int i,n,sum;
sum=0;
i=1;

printf("Enter a Number:\n");
scanf("%d",&n);

printf("Sum of first %d Natutral numbers are:-\n",n);

while(i<=n)
{
 sum =sum+i;
 i++;
}
 printf("%d\n",sum);
}

/* Program 11:- WAP to print first N odd natural numbers .*/

# include<stdio.h>

int main()
{
int i,n;
i=1;

printf("Enter a Number:\n");
scanf("%d",&n);


printf("Odd natural numbers from 1 to %d  are:-\n",n);

while(i<=n)
{
if(i%2!=0)
 printf("%d\n",i);
i++;
}
}

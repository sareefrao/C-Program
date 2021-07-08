/* Program 7:- WAP to print first N even natural numbers .*/

# include<stdio.h>

int main()
{
int i,n;
i=1;

printf("Enter a Number:\n");
scanf("%d",&n);

printf("Even Natural numbers from 1 to %d.\n",n);

while(i<=n)
{
if(i%2==0)
 printf("%d\n",i);
i++;
}
}

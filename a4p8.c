/* Program 8:- WAP to print first N even natural numbers in reverse order .*/

# include<stdio.h>

int main()
{
int i,n;

printf("Enter a Number:\n");
scanf("%d",&n);
i=n;

printf("Even Natural numbers from 1 to %d in reverse order.\n",n);

while(i>=1)
{
if(i%2==0)
 printf("%d\n",i);
i--;
}
}

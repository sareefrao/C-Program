/* Program 3:- WAP to print first N natural number .*/

# include<stdio.h>

int main()
{
int i,n;
i=1;

printf("Enter a Number:\n");
scanf("%d",&n);

printf("Natural numbers from 1 to %d .\n",n);

while(i<=n)
{
 printf("%d\n",i);
 i++;
}
}

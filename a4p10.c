/* Program 10:- WAP to print first 10 odd natural numbers in reverse order .*/

# include<stdio.h>

int main()
{
int i;
i=20;
printf("First 10 Odd Natural numbers in reverse order.\n");

while(i>=1)
{
if(i%2!=0)
 printf("%d\n",i);
i--;
}
}

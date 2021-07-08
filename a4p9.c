/* Program 9:- WAP to print first 10 odd natural numbers .*/

# include<stdio.h>

int main()
{
int i;
i=1;
printf("First 10 Odd Natural numbers are:-\n");

while(i<=20)
{
if(i%2!=0)
 printf("%d\n",i);
i++;
}
}

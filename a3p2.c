
/*Program 2:- WAP to check whether a givan number is divisible by 5 or not.*/


# include<stdio.h>

int main()
{
int b;
printf("Enter a Number:");
scanf("%d",&b);

printf("By First type:-\n");

if(b%5)
{
 printf("%d is Not Divisible by 5.\n",b);
}
else
{
 printf("%d is Divisible by 5.\n",b);
}

printf("******************************************\n");

printf("By Second type:-\n");

if(b%5==0)
{
 printf("%d is  Divisible by 5.\n",b);
}
if(b%5!=0)
{
 printf("%d is Not Divisible by 5.\n",b);
}}



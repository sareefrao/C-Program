/*Program 4 :- WAP to print a given Number but without last digit.*/

#include<stdio.h>

int main()
{
int a,x;
printf("Enter Value of A:\n");
scanf("%d",&a);

x=a/10;

printf("Given Number is without last Digit:-\n");
printf("%d\n",x);
}

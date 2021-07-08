/*Program 2 :- WAP to swap values of two int Variables without using third variable. */

#include<stdio.h>

int main()
{
int a,b;
printf("Enter Value of A:\n");
scanf("%d",&a);
printf("Enter Value of B:\n");
scanf("%d",&b);

printf("Before Swapping:\n");
printf("A = %d and B = %d\n",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("After Swapping:\n");
printf("A = %d and B = %d\n",a,b);
}

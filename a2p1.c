/*Program 1 :- WAP to swap values of two int Variables.*/

#include<stdio.h>

int main()
{
int a,b,temp;
printf("Enter Value of A:\n");
scanf("%d",&a);
printf("Enter Value of B:\n");
scanf("%d",&b);

printf("Before Swapping:\n");
printf("A = %d and B = %d\n",a,b);

temp=a;
a=b;
b=temp;

printf("After Swapping:\n");
printf("A = %d and B = %d\n",a,b);
}

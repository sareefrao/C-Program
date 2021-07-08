/* Program 7 :- WAP to calculate area of rectangle.Take length and breadth as input from user. */

#include<stdio.h>

int main()

{
float l,b,a;

printf("Enter Length of Rectangle:\n");
scanf("%f",&l);
printf("Enter Breadth of Rectangle:\n");
scanf("%f",&b);

a=l*b;
printf("Area of Rectangle is %f.\n",a);
}

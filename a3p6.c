
/*Program 6:- WAP to check nature of roots of a givan Quadratic equation.*/


# include<stdio.h>

int main()
{
int a,b,c,d,x,y;
printf("Enter Value of A:");
scanf("%d",&a);
printf("Enter Value of B:");
scanf("%d",&b);
printf("Enter Value of C:");
scanf("%d",&c);

printf("Equatin is %dx+%dy+%d \n",a,b,c);

d=((b*b)-(4*a*c));
printf("Value of D is %d\n",d);

if(d>0)
{
 printf("Real and Distinct Roots\n");
}
else if(d==0)
{
 printf("Real and Equal Roots\n");
}
else if (d<0)
{
printf("Imaginary Roots\n");
}}



/*Program 5:- WAP to check whether an year is leap year or not.*/


# include<stdio.h>

int main()
{
int year;
printf("Enter a Year:");
scanf("%d",&year);
if(year%100==0)
{
(year%400==0)?printf("Leap Year.\n"):printf("Non- Leap year.\n");
}
else
{
(year%4)?printf("non-Leap Year.\n"):printf("Leap Year.\n");
}}



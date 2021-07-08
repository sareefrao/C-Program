/* Program 9 :- WAP to calculate Simple Interest.Take input from user. */

#include<stdio.h>

int main()

{ 
float p,r,t,si;

printf("Enter Amount:\n");
scanf("%f",&p);
printf("Enter Rate:\n");
scanf("%f",&r);
printf("Enter Time Period in Month:\n");
scanf("%f",&t);

si=(p*r*t)/100;
printf("Simple Interest of given data is %f.\n",si);
}

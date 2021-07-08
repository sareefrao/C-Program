/* Program 8 :- WAP to calculate volume of cuboid.Take input from user. */

#include<stdio.h>

int main()

{
int  l,w,h,v;

printf("Enter Length of Cuboid:\n");
scanf("%d",&l);
printf("Enter Width of Cuboid:\n");
scanf("%d",&w);
printf("Enter Height of Cuboid:\n");
scanf("%d",&h);

v=l*w*h;
printf("Volume of Cuboid is %d.\n",v);
}

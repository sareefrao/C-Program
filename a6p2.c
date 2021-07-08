/* Program 2:- WAP to print all prime numbers under 100.*/

#include<stdio.h>
int main()
{
 int i,j;

for(j=2;j<=100;j++)
{
    for(i=2;i<=j-1;i++)
    {
    if(j%i==0)
        break;
    }
if(i==j)
    printf("%d ",j);
}
printf("\n");
}

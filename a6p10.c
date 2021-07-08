/* Program 10:- WAP to print all prime factors of a given number.*/

#include<stdio.h>
int main()
{
 int i,n,a,b,j;
printf("Enter a Number:\n");
scanf("%d",&a);

printf("All Prime Factors of given number are:-\n");

for(i=1;i<=a;i++)
{
 n=a/i;
 if(n*i==a)
  {     
     for(j=2;j<=n;j++)
      {
        if(n%j==0)
             break;
      }
    if(j==n)
      printf("%d\n",n);
  }
 else
    continue; 
}
}

/* Program 10:- WAP to find Nth term of a Fibonacci series.*/

#include<stdio.h>
int main ()
{
int i,a,n,s,m,f;
printf("Enter total no. of elements of Fibonacci series:\n");
scanf("%d",&n);

printf("Enter two Numbers:\n");
scanf("%d%d",&a,&s);

printf("Which term you want to Find:-\n");
scanf("%d",&f);

printf("%dth term of Fibonacci Series is :-\n",f);

for(i=1;i<=n;i++)
{
 m=a+s;
  if(i==f)
    printf("%d\n",m);
 a=s;
 s=m;
}
}

/* Program 11:- WAP to check whether given number is a term in Fibonacci series or not.*/

#include<stdio.h>
int main ()
{
int i,a,n,s,m,f;
printf("Enter total no. of elements of Fibonacci series:\n");
scanf("%d",&n);

printf("Enter two Numbers:\n");
scanf("%d%d",&a,&s);

printf("Which Number you want to Find:-\n");
scanf("%d",&f);

for(i=1;i<=n;i++)
{
 m=a+s;
  
 if(m==f)
   { printf("Given no. Found in Fibonacci series.\n");
     break;
   }
 a=s;
 s=m;
}
if(i==(n+1))
    printf("Given no. Not Found in Fibonacci series.\n");
}

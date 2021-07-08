/* Program 7:- WAP to calculate LCM of two numbers.*/

#include<stdio.h>
int main()
{
 int i,n,m,a,b,f;
f=1;
printf("Enter two Numbers:\n");
scanf("%d%d",&a,&b);

printf("LCM of two Numbers is:-\n");

for(i=1;i<=10;i++)
  {
   n=a/i;
   m=b/i;
    if(a/i && b/i)
        { f=f*i;
          printf("%d \n",f);
        }
    else
        continue;
   a=n;
   b=m;
  }
}

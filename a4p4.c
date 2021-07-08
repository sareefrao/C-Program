/* Program 4:- WAP to print first N natural number in reverse order.*/

# include<stdio.h>

int main()
{
int i,n,m;
m=1;
printf("Enter a Number:\n");
scanf("%d",&n);
i=n;

printf("Natural numbers from 1 to %d in reverse order.\n",n);

while(i>=1)
{
 printf("%d\n",i);
 i--;
}

printf("*******************************\n");
while(m<=n)
{
 printf("%d ",(n+1)-m);
 m++;
}
printf("\n");
}

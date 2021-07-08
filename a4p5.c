/* Program 5:- WAP to print first 10 even natural numbers .*/

# include<stdio.h>

int main()
{
int i,n;
i=1;
n=1;
printf("First 10 Even Natural numbers are:-\n");

while(i<=20)
{
if(i%2==0)
 printf("%d\n",i);
i++;
}

printf("**************************************\n");

while(n<=10)
{
 printf("%d ",n*2);
 n++;
}
printf("\n");
}

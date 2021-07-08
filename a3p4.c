
/*Program 4:- WAP to check whether a givan number is even or odd without use of % operator.*/


# include<stdio.h>

int main()
{
int c,x;
printf("Enter a Number:");
scanf("%d",&c);
x=c/2;
if(x*2==c)
{
 printf("No. is Even.\n");
}
if(x*2!=c)
{
 printf("No. is Odd.\n");
}
printf("***********************************\n");

if(c & 1)
    printf("No. is Odd.\n");
else
    printf("No. is Even.\n");
}



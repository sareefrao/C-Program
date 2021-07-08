/*Program 9:- WAP to find greater between three numbers.*/


# include<stdio.h>

int main()
{
int a,b,c;
printf("Enter three Numbers:\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b)
{
if(a>c)
    printf("A is Greater\n");
else
    printf("C is Greater\n");
}
else
{
if(b>c)
    printf("B is Greater\n");
else
    printf("C is Greater\n");
}}


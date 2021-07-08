/* WAP which takesmonth number as an input and display number of days in that month. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int ch=0,a;

while(ch!=13)
{
    printf("1:-Choose 1 to 12 for Choose Month.\n2:-Choose 13 For Exit.\n");

    printf("Enter your Choice:-\n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("January month have 31 Days.\n");
        break;
    case 2:
        printf("February month have 28 Days.\n");
        break;
    case 3:
        printf("March month have 31 Days.\n");
        break;
    case 4:
        printf("April month have 30 Days.\n");
        break;
    case 5:
        printf("May month have 31 Days.\n");
        break;
    case 6:
        printf("June month have 30 Days.\n");
        break;
    case 7:
        printf("July month have 31 Days.\n");
        break;
    case 8:
        printf("August month have 31 Days.\n");
        break;
    case 9:
        printf("September month have 30 Days.\n");
        break;
    case 10:
        printf("October month have 31 Days.\n");
        break;
    case 11:
        printf("November month have 30 Days.\n");
        break;
    case 12:
        printf("December month have 31 Days.\n");
        break;
    case 13:
        exit(0);
        printf("Exit\n");
        break;
    default:
        printf("Invalid Choice.\n");
    }
}
}

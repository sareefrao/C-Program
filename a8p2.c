/* WAP with following options:- Addition,Subtraction,Multiplication,Division,Exit. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int ch=0,a,b,c;
while(ch!=5)
{
  printf("1:-Addition\n2:-Subtraction\n3:-Multiplication\n4:-Division\n5:-Exit\n");
  printf("Enter your Choice:\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
        printf("Enter two Number:\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Sum  of two number is %d",c);
        break;
    case 2:
        printf("Enter two Number:\n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("Subtraction  of two number is %d",c);
        break;
    case 3:
        printf("Enter two Number:\n");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("Multiplication  of two number is %d",c);
        break;
    case 4:
        printf("Enter two Number:\n");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("Division  of two number is %d",c);
        break;
    case 5:
        exit(0);
        printf("End of program.\n");
        break;
    default:
        printf("Invalid Choice\n");
    }
  }
}

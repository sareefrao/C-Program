/*Program 10:- WAP which takes marks of 5 subjects .Display result as pass or fail.Also print division obtained if candidate has passed the exam.(Maximum marks 100 of each subject*/


# include<stdio.h>

int main()
{
float a,b,c,d,e,x;

printf("Maximum marks of each Subject are 100.\n");
printf("Minimum passing marks of each Subject are 33.\n");
printf(" \n");

printf("Enter Marks of 5 Subjects:\n");
scanf("%f%f%f%f%F",&a,&b,&c,&d,&e);

x=(a+b+c+d+e)/5;
printf("%.2f Percent Obtained.\n",x);

if(x>33)
{
 printf("Candidate Passed in Exam.\n");

 if(x>90)
    printf("First Division.\n");
 else if(x>75)
    printf("Second Division.\n");
 else if (x>60)
    printf("Third Division.\n");
 else if(x>50)
    printf("Forth Division.\n");

}
else
{
printf("Candidate Failed in Exam.\n");
}}


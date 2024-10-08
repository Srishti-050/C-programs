#include<stdio.h>
int main()
{
    /* declaration of variables*/
    int num1;
    //input values
    printf("Enter 1st integer number for addition");
    scanf("%d",&num1);
    int num2;
    printf("Enter 2nd integer number for addition");
    scanf("%d",&num2);
    //process section
    int sum;
    sum=num1+num2;
    //output section
    printf("Result is : %d",sum);
    return 0;
}

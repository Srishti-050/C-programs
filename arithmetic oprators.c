#include<stdio.h>
int main()
{
    //declaring variables
    int a, b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    //Performing arithmetic operations
    int sum = a+b;
    int diff = a-b;
    int multiple = a*b;
    int div = a/b;
    //printing output
    printf("a=%d,b=%d \n",a,b);
    printf("Sum of a and b : %d\n",sum);
    printf("Difference of a and b : %d\n",diff);
    printf("Multiplication of a and b : %d\n",multiple);
    printf("Division of a and b : %d\n",div);
    return 0;
}

#include<stdio.h>
int main()
{
    //declaration of variables
    int a,i,counter=0;
    printf("Enter a number to check if it is prime or not:");
    scanf("%d",&a);
    //using for loop
    for (i=1;i<=a;i++)
    {
        //using if and else loop
        if (a% i==0)
            counter++;
    }
    if (counter==2)
    //printing of output
    {
        printf("Number is a Prime number");
    }
    else{
        printf("Number is not Prime number");
    }
    return 0;
}

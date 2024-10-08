#include<stdio.h>
int main()
{
    //declaration of 1st variable
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    //declaration of 2nd variable
    int b;
    printf("Enter the number");
    scanf("%d",&b);
    printf("\n before swapping");
    printf("\n a=%d",a);
    printf("\n b=%d",b);
    int t;
    //swapping numbers with introduction of the 3rd variable
    t=a;
    a=b;
    b=t;
    printf("\n after swapping");
    printf("\n a=%d",a);
    printf("\n b=%d",b);
    return 0;
}

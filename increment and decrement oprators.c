#include<stdio.h>
int main()
{
    //declaring variables
    int i;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    //printing of output
    printf("\n%d",i++);
    printf("\n%d",++i);
    printf("\n%d",i--);
    printf("\n%d",--i);
    return 0;
}

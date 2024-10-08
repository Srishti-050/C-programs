#include<stdio.h>
int main()
{
    //declaration of the variable
    int i=1;
    //using of for loop
    for (i;i<=4;i++)
    {
        //using nested loop
        for(int j=1;j<=4;j++)
        {
            //printing of the output
            printf("%d,%d",i,j);
        }
        printf("\n");
    }
    return 0;
}

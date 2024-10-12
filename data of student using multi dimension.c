#include<stdio.h>
main()
{
    //declaring variables
    int i=0,j=0,k=0,l=0;
    //using array to store information of the students
    char srm[l][k][j][i];
    //using for loop
    //using nested for loop
    for (l=0;l<1;l++)
    {
        printf("Enter the school name:");
        scanf("%s",&srm[l]);
        for (k=0;k<1;k++)
        {
            printf("Enter the department name:");
            scanf("%s",&srm[k]);
            for (j=0;j<2;j++)
                {
                    printf("Enter the sections:");
                    scanf("%s",&srm[j]);
                    for (i=0;i<5;i++)
                        {
                            printf("Enter the name of student:");
                            scanf("%s",&srm[i]);
                        }

                }
        }
    }
    //printing the output
    printf("\nThe name is : %s",&srm[0][0][1][3]);
    return 0;
}

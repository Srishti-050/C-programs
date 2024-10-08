#include<stdio.h>
int main()
{
    //declaring the value for pie
    float pie=3.14;
    //declaring radius variable
    int radius;
    printf("Enter the radius of the circle :");
    scanf("%d",&radius);
    printf("The radius of the circle is %d\n",radius);
    //calculating area of the circle
    float area = (float)(pie*radius*radius);
    //output process
    printf("The area of the given circle is %f",area);
    return 0;
}

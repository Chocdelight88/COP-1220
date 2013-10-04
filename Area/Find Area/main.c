/*
Name:
Date:
Desc:
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Declarations//
    int length;
    int width;
    int area;

    //Input Main//
    printf("**********FIND THE AREA**********\n");
    printf("\nEnter the length of the room:\n");
    scanf("%d", &length);

    printf("\nEnter the width of the room:\n");
    scanf("%d",&width );
    printf("*******************");


    // calculate the area//
    area = length * width;

    printf("\nArea is: %d\n",area);
    return 0;
}

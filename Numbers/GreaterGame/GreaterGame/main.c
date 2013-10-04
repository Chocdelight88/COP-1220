/*
Name:Antoine Brundidge
Date: 09162013
Desc:This program will take two numbers that are input by the user and outputs which is greater.
*/

#include <stdio.h>
#include <math.h>

int main()

{

float inputone;
float inputtwo;

    printf("\t**************************************\n");
    printf("\t**************************************\n");
    printf("\t\tWhich number is greater?\n");
    printf("\t**************************************\n");
    printf("\t**************************************\n");

    printf("\n\nEnter the first number: \n\n");
    scanf("%f" ,&inputone);

    printf("\n\nEnter the second number: \n\n");
    scanf("%f" ,&inputtwo);

    if (inputone > inputtwo)
    {
        printf("\n\nThe first number is greater than the second. %4.2f\n" ,inputone);
    }
    else
    {
        printf("\n\nThe second number is greater than the first. %4.2f\n" ,inputtwo);
    }
    return 0;
}

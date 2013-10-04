/*
Name:
Date:
Description: This program will convert coins to Dollar amount
Understand arithmatic operators
*/

#include <stdio.h>

#define QVALUE 0.25
#define DVALUE 0.1
#define NVALUE 0.05
#define CVALUE 0.01

int main()
{
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("\nDOLLAR MACHINE\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    printf("\nThis program will accept the number of coins and give dollar amount");


    int quarters, dimes, nickels, cents, total;

    printf("Enter the amount of quarters: \n");
    scanf("%d", &quarters);

    printf("Enter the amount of dimes: \n");
    scanf("%d", &dimes);

    printf("Enter the amount of nickels: \n");
    scanf("%d", &nickels);

    printf("Enter the amount of cents: \n");
    scanf("%d", &cents);

    total = (quarters * QVALUE) + (dimes * DVALUE)+(nickels * NVALUE) + (cents * CVALUE);



    printf("\nThe dollar amount is: %d:",total);
    return 0;
}


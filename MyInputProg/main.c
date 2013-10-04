/*
Name:
Date:
Description:
This program will accept data in miles from user and covert to kilometer
*/

//preprocessor directive

#include <stdio.h>

//define constants
#define MILES_KMS_CONV 1.6

//begin main funtion
int main()
{
    //declarations
    int kms, miles;

    printf("\t\t*****Miles to KMS Converter*****");
    printf("\n\nThe program will accept distance in Miles and convert it to KMS\n");

    printf("\nEnter distance in miles:");
    scanf("%d", &miles);

    //calculations
    kms = miles * MILES_KMS_CONV;

    printf("You entered %d miles. The distance in kilometers is : %d\n", miles, kms);

    //printf("\n\nThe value stored in the variable miles is: %d", miles);
    //printf("\nThe memory address of the variable miles is: %d\n", &miles);

    return 0;
}

/*
Name: Antoine Brundidge
Date: 29 August 2013
Desription: Learn Output
History:
*/

//preprocessor directive for printf function
#include <stdio.h>

//begin main function

int main()
{
    //Declaration
    int miles, kms;

    //Assign
    miles = 50;
    kms = miles * 1.6;

    //Output
    printf("%d miles is %d kilometers",miles,kms);

    return 0;

}

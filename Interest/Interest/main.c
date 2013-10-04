/*
Name: Antoine Brundidge
Date: 10/1/2013
Desc: Interest rate
*/

#include <stdio.h>

#define TIME_FIVE 5
#define RATE_FIVE .045

#define TIME_FOUR 4
#define RATE_FOUR .04

#define TIME_THREE 3
#define RATE_THREE .035

#define TIME_TWO 2
#define RATE_TWO .03

#define TIME_ONE 1
#define RATE_ONE .025

#define RATE_ZERO .02


int main()
{
    float tempInt, time;

    printf("\t\t******************************************\n");
    printf("\t\t******************************************\n");
    printf("\t\t\tInterest Rate Program\n");
    printf("\t\t******************************************\n");
    printf("\t\t******************************************\n");

    printf("\n\n\nThis program accepts the time funds are left in the bank then\ndisplays the interest rate corresponding to the time entered.");
    printf("\n\nPlease enter the amount of time in years on your deposit:\n");
    scanf("%f", &time);

   if (time >= TIME_FIVE)
{
    tempInt = RATE_FIVE;
}
    else
    {
        if (time >= TIME_FOUR)
        {
            tempInt = RATE_FOUR;
        }
        else
        {
            if (time >= TIME_THREE)
            {
                tempInt = RATE_THREE;
            }

            else
            {
                if (time >= TIME_TWO)
                {
                    tempInt = RATE_TWO;
                }
                else
                {
                    if (time >= TIME_ONE)
                    {
                        tempInt = RATE_ONE;
                    }
                    else
                        tempInt = RATE_ZERO;
                }
            }
        }
    }

    printf("\nThe interest rate for %.1f years \n\n:is %.3f\n\n", time, tempInt);



    return 0;
}

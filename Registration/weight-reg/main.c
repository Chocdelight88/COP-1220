/*
Name:
Date:
Desc:
*/

#include <stdio.h>

#define WeightClass1 16.50
#define WeightClass2 25.50
#define WeightClass3 46.50
#define WeightClass4 27.00
#define WeightClass5 30.50
#define WeightClass6 52.50
#define WeightClass7 35.50
#define WeightClass8 65.50

int main()
{
    int year, weight,type;
    float cost;

    printf("Please enter year of your vehicle:\n");
    scanf("%d", &year);

    printf("Please enter weight of your vehicle:\n");
    scanf("%d",&weight);


    if (year <= 1970 && weight < 2700)
    {
        type = 1;
        cost = WeightClass1;
    }
        else
        {
            if (year <= 1970 && weight <= 3800)
            {
                type = 2;
                cost = WeightClass2;
            }
            else
            {
                if (year <= 1970 && weight > 3800)
                {
                    type = 3;
                    cost = WeightClass3;
                }
                else
                {
                    if (year <= 1979 && weight < 2700)
                    {
                        type = 4;
                        cost = WeightClass4;
                    }
                    else
                    {
                        if (year <= 1979 && weight <= 3800)
                        {
                            type = 5;
                            cost = WeightClass5;
                        }
                        else
                        {
                            if (year <= 1979 && weight > 3800)
                            {
                                type = 6;
                                cost = WeightClass6;
                            }
                            else
                            {
                                if (year >= 1980 && weight < 3500)
                                {
                                    type = 7;
                                    cost = WeightClass7;
                                }
                                else
                                {
                                    if (year >= 1980 && weight >= 3500)
                                    {
                                        type = 8;
                                        cost = WeightClass8;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        printf("\n\nYour vehicle weight class is %d \n Your registration fee is: %3.2f\n\n", type, cost);



    return 0;
}

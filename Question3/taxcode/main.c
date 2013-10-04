#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,code;
    float amount,tax,total;

    printf("Please enter your customer ID:\n");
    scanf("%d", &id);

    printf("Please enter your purchase amount:");
    scanf("%f", &amount);

    printf("Please enter your tax code:\n");
    scanf("%d", &code);

    if (code == 0)
    {
        tax = (amount * .0);

    }
    else
    {
        if (code == 1)
        {
            tax = (amount * .03);
        }
        else
        {
            if (code == 2)
            {
                tax = (amount * .05);

                {
                    if (code == 3)
                    {
                        tax = (amount * .07);
                    }
                }
            }
        }
    }

    total = (amount + tax);



    printf("Your ID#:%d\n",id);
    printf("Purchase Amount:%f\n",amount);
    printf("Sales Tax:%f\n",tax);
    printf("Total Amount Due:%f\n",total);

    return 0;
}

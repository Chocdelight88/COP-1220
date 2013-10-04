/* Date: Feb 15 2012, COP 1220
Using Linear Nested selection structure
This program will determine the bonus received by employees
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int lastYrProd=0, thisYrProd=0, prodDiff=0, bonus;

	printf("This program will determine the bonus received by employees\n");

	printf("Enter last year production:\n");
	scanf("%d", &lastYrProd);

	printf("Enter this year production:\n");
	scanf("%d", &thisYrProd);

	prodDiff = thisYrProd - lastYrProd;

	if (prodDiff <= 0)
        {
            printf("Sorry no bonus. Better luck next time.\n");
        }
    else
        {
            if (prodDiff <= 1000)
            {
                bonus = 250;
            }
            if (prodDiff <= 3000)
            {
                bonus = 500;
            }
            if (prodDiff <= 6000)
            {
                bonus = 750;
            }
            else
            {
                bonus = 1000;
            }
            printf("Congratulations! you got a bonus of:%d\n", bonus);
}

	return 0;
}

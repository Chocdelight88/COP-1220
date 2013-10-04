#include <stdio.h>
#define DC 35
#define UC 1.10

int main()
{
    int previous;
    int current;
    float bill;
    int diff;

    printf("\nEnter meter reading from previous quater: \n");
    scanf("%d" , &previous);

    printf("\nEnter meter reading from current quarter: \n");
    scanf("%d" , &current);

    diff = (current - previous);

    bill = (DC) + (UC * diff);



    printf("\nYour bill for this quarter is: %4.2f\n" ,bill);

    return 0;
}

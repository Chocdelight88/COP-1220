#include <stdio.h>
#include <math.h>

int main()
{
    float miles, gallons, mpg;


    printf("Enter the miles driven:\n" ,miles);
    scanf("%f", &miles);

    printf("Enter the gallons of gas used:\n" ,gallons);
    scanf("%f", &gallons);

    mpg = miles/gallons;

    printf("MPG is %f" ,mpg);
    return 0;
}

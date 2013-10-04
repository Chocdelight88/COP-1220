#include <stdio.h>
#include <math.h>

int main()
{
    //Declarations//
    float length, width, depth, volume;


    printf("Enter the length of the swimming pool: \n",length);
    scanf("%f" , &length);

    printf("\nEnter the width of the swimming pool: \n",width);
    scanf("%f", &width);

    printf("\nEnter the average depth of the swimming pool: \n" ,depth);
    scanf("%f", &depth);

    //Calculations//
    volume = length * width * depth;

    //Output//
    printf("\nVolume of the pool is: %f\n" ,volume);

    return 0;
}

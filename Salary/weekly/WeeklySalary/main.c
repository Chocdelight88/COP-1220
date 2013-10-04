/*
Name: Antoine Brundidge
Desc: This promgram will compute weekly hours into a salary.
*/
#include <stdio.h>
#include <math.h>

int main()
{
   float hours;

   printf("\t\t****************************\n");
   printf("\t\t****************************\n");
   printf("\t\t\tWEEKLY SALARY\n");
   printf("\t\t****************************\n");
   printf("\t\t****************************\n");

    printf("\n\nPlease enter your weekly hours:\n", hours);
    scanf("%f", &hours);

    if(hours <=40.0)
    {
        hours = (8.00 * hours);
        printf("\nYour weekly salary is: $%4.2f\n", hours);
    }
    else
    {
        hours = (hours - 40)* 12.00 + 320.00;
        printf("\nYour weekly salary is: $%4.2f\n", hours);


    }




    return 0;
}

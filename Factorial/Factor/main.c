/*
Name:
Date:
Description:
*/

//preprocessor directive

#include <stdio.h>
#include <math.h>

int main()
{
   int a,b,c;
    printf("Enter a Number: ");
    scanf("%1f, &a");

    if (a<1)
        printf("1");
    else
        b=1;
    for (c=1; c<=b; c++)
    {
        b=b*c;
}

    printf("Factorial of %d equals %d",a,b);

    return 0;
}

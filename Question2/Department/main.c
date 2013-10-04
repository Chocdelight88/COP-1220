#include <stdio.h>
#include <stdlib.h>

int main()

{
    int depart,raise;

    printf("Please enter your department number:\n");
    scanf("%d", &depart);

    if (depart <=5)
    {
        raise = 100;
    }
    else
    {
        if (depart <=14)
        {
            raise = 250;
        }
        else
        {
            if (depart <=9)
            {
                raise =500;
            }
        }
    }

    printf("Your raise based on your department is:%d",raise);

    return 0;
}

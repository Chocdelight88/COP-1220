#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Please enter your age:\n");
    scanf("%d", &age);

    if (age == 40)
    {
        printf("Happy Birthday!");
    }
    else
    {
       printf("Sorry!");
    }

    return 0;
}

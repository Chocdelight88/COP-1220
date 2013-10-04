#include <stdio.h>


int main()

{
    double testScore1, testScore2, testScore3, testScore4, testScore5;
    double avgDouble;
    float avgFloat;

    printf("\t\t********************\n");
    printf("\t\tTEST SCORE AVERAGE\n");
    printf("\t\t********************\n");


    printf("\n\nThis program accepts 5 test scores and \ncalculates the average.\n");

    printf("\nEnter the first test score:\n");
    scanf("%lf", &testScore1);

    printf("\nEnter the second test score:\n");
    scanf("%lf", &testScore2);

    printf("\nEnter the third test score:\n");
    scanf("%lf", &testScore3);

    printf("\nEnter the fourth test score:\n");
    scanf("%lf", &testScore4);

    printf("\nEnter the fifth test score:\n");
    scanf("%lf", &testScore5);

    avgDouble = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5)/5;
    avgFloat = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5)/5;

    printf("The average of the test scores as double datatype is: %5.1f\n", avgDouble);
    printf("The average of the test scores as float datatype is: %5.1f\n", avgDouble);

    return 0;
}

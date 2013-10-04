#include <stdio.h>

#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1


int main()
{
    int amount;
    int breakdown;
    int numof20s=0, numof10s=0, numof5s=0, numof1s=0;

    printf("\nEnter in dollar amount: \n");
    scanf("%d" ,&amount);

   if (amount > 0)
   {
      if(amount >= TWENTY)
      {
          numof20s = amount/TWENTY;
          amount = amount%TWENTY;
      }
      if(amount >= TEN)
      {
          numof10s = amount/TEN;
          amount = amount%TEN;
      }
      if(amount >= FIVE)
      {
          numof5s = amount/FIVE;
          amount = amount%FIVE;
      }
      if (amount >= ONE)
      {
          numof1s = amount;
      }
   }
   else


   {
       printf("\nInvalid Dollar amount cannot be negative or zero");
   }

    printf("The Number of 20s are: %d\n" ,numof20s);
    printf("The Number of 10s are: %d\n" ,numof10s);
    printf("The Number of 5s are: %d\n" ,numof5s);
    printf("The Number of 1s are: %d\n" ,numof1s);

    return 0;
}

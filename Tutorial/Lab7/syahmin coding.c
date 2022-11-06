#include <stdio.h>

int main()
{

    char order='y',food[12],drink[12];
    float top_up,food_price, food_quantity, drink_price,drink_quantity, total, balance;



    printf("\nEnter top-up:");
    scanf("%f",&top_up);
    printf("\nMenu:\nNasi Goreng: RM5.00\nMee Goreng: RM3.00\nTeh O: RM1.00\nMilo Ice: RM3.00");


    while (order=='y')
    {
     printf("\nEnter food:");
    scanf(" %[^\n]",&food[12]);
    fflush(stdin);
     printf("\nEnter food quantity:");
     scanf("%f",&food_quantity);

     printf("\nEnter drink:");
     scanf(" %[^\n]",&drink[12]);
    fflush(stdin);
     printf("\nEnter drink quantity:");
     scanf("%f",&drink_quantity);

     if(food[12]=="Nasi Goreng")
     {
      food_price=5.0;
      }
     else
     {
      food_price=3.0;
      }

     if(drink[12]=="Teh O")
     {
      drink_price=1.0;
      }
     else
     {
      drink_price=3.0;
      }


     total=(food_price*food_quantity)+(drink_price*drink_quantity);

     balance=top_up-total;
     printf("\nTotal: RM%.2f\nTotal Balance: RM%.2f",total,balance);
     printf("\nY to continue,N to stop: ");
     scanf(" %c",&order);
    }
   return 0;
}


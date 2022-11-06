#include <stdio.h>
#include <string.h>
#include <math.h>
#define cows 5

int main ()
{
    int weights[cows],i;
    float c,milkProd[cows],totalProd=0,totalPrice;


     for (i=0;i<cows;i++)
    {
        printf("\nEnter weight %i) -",(i+1));
        scanf("%i",&weights[i]);

        if (weights[i]<600)
        {
            c=0.2;
        }
        else
        {
            c=0.5;
        }

        milkProd[i]=(1.15*pow(weights[i],0.54)+0.25)*c;

        totalProd=totalProd+milkProd[i];
    }

    totalPrice=totalProd*4.5;
    printf("Total milk produce in Liter = %.2f\n",totalProd);
    printf("Sell value of milk = RM%.2f", totalPrice);



    return 0;
}

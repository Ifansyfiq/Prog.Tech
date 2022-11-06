#include <stdio.h>
#include <string.h>

float getAmount(void);
float getTotalAfter(float a,float b);
void displayTotalAfter(float p);
void displayTotalPaid(float *z,int *y);

int main ()
{
    int loop=1,billType,compny;
    float amount,discount,totalAfter,totalPaid=0;

    while (loop==1)
    {
    printf("\nEnter bill type (1=utilities , 2=internet): ");
    scanf("%d",&billType);

    if (billType==1)
    {
        printf("\nEnter 1=TNB or 2=SYABAS : ");
        scanf("%d",&compny);
        if(compny==1)
            {
                discount=0.05;
            }
            else
            {
                discount=0.10;
            }

    }
    else
    {
        printf("\nEnter 1=DIGI , 2=UNIFI or 3=MAXIS FIBRE : ");
        scanf("%d",&compny);
        discount=0.05;
    }

    amount=getAmount();

    totalAfter=getTotalAfter(amount,discount);

    displayTotalAfter(totalAfter);

    totalPaid=totalPaid+totalAfter;

    printf("\nContinue? 1=yes, 0=no: ");
    scanf("%d",&loop);
    }

    displayTotalPaid(&totalPaid,&loop);

    return 0;
}

float getAmount(void)
{
    float x;

    printf("\nEnter amount to pay : RM");
    scanf("%f",&x);

    return x;
}


float getTotalAfter(float a,float b)
{
    float after;

     after=a-(a*b);

     return after;
}


void displayTotalAfter(float p)
{
    printf("\ntotal after: RM%.2f",p);

    return;
}

void displayTotalPaid(float *z,int *y)
{
    if(*y==0)
    {
        printf("\nTotal paid = RM%.2f",*z);
        printf("\nThank you for using TickNGo");
    }
    return;
}
























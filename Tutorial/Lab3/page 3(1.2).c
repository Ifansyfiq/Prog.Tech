#include<stdio.h>

int main()
{
    int bookID;
    float deskQty,chairQty,bedQty,totalDesk,totalChair,totalBed,totalPrice;

    printf("\ninput your booking ID:");
    scanf("%d",&bookID);
    printf("\ninput quantity of desk:");
    scanf("%f",&deskQty);
    printf("\ninput quantity of chair:");
    scanf("%f",&chairQty);
    printf("\ninput quantity of bed:");
    scanf("%f",&bedQty);

    totalDesk=deskQty*500;
    totalChair=chairQty*200;
    totalBed=bedQty*1000;
    totalPrice=totalBed+totalChair+totalDesk;

    printf("\n");
    printf("\n");
    printf("\n            Jati Furniture Booking Form            ");
    printf("\nBooking ID: %d",bookID);
    printf("\nno. |item   |price(RM)    |quantity     |total item price(RM)");
    printf("\n1   |desk   |500.00       |%.1f          |%.2f                ",deskQty,totalDesk);
    printf("\n2   |chair  |200.00       |%.1f          |%.2f                ",chairQty,totalChair);
    printf("\n3   |bed    |1000.00      |%.1f          |%.2f                ",bedQty,totalBed);
    printf("\n                                   total|%.2f                ",totalPrice);

    return 0;
}

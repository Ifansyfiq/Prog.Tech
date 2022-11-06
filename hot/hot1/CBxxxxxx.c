#include<stdio.h>
#include<string.h>
int main()
{
   char viaCc[5],shop[5],item[5],decision[5],nameShop[50],itemName[50];
   float unit,totalPrice,coin,coininRM,finalPrice,discount=0,cashBack,finalBd;
   int user;

   do
   {
   do
    {
   printf("\nvia cash back channel (Y:yes,N:no)?:");
   scanf("%s",viaCc);
    }
   while (viaCc=="N");
   printf("\nenter shop (S:shop Pi,F: fashion balik):");
   scanf("%s",shop);

   if (shop=='s'||'S')
   {
       strcpy(nameShop,"shop Pi");
   }
   else if (shop=='f'||'F')
   {
       strcpy(nameShop,"fashion balik");
   }

   printf("\n--------items---------");
   printf("\nA: sakura dining set");
   printf("\nB: organic cotton bedding set");
   printf("\nC: smart TV");
   printf("\n----------------------");
   printf("\nenter code of item to be purchased:");
   scanf("%s",item);
   printf("\nenter unit of purchased item:");
   scanf("%f",&unit);

   if (item=='A'||'a')
   {
    totalPrice=1500*unit;
    strcpy(itemName,"sakura  dining set");
   }
   else if (item=='B'||'b')
   {
       totalPrice=550*unit;
       if (unit>=4)
       {
           discount=totalPrice*0.15;
       }
       strcpy(itemName,"organic cotton bedding set");
   }
   else
   {
       totalPrice=1999*unit;
       strcpy(itemName,"smart TV");
   }

   if (shop=='S'||'s')
   {
       if (totalPrice>500&&totalPrice<1000)
       {
           coin=2*totalPrice;
           cashBack=1.5;
       }
       else if (totalPrice>1001&&totalPrice<1500)
       {
           coin=4*totalPrice;
           cashBack=2.5;
       }
       else if (totalPrice>1501&&totalPrice<2000)
       {
           coin=6*totalPrice;
           cashBack=3.5;
       }
       else if (totalPrice>2000)
       {
           coin=8*totalPrice;
           cashBack=4.5;
       }
       else
        printf("\nwrong input");
   }
   else if (shop=='F'||'f')
   {
        if (totalPrice>500&&totalPrice<1000)
       {
           coin=1.5*totalPrice;
           cashBack=2;
       }
       else if (totalPrice>1001&&totalPrice<1500)
       {
           coin=3.5*totalPrice;
           cashBack=3;
       }
       else if (totalPrice>1501&&totalPrice<2000)
       {
           coin=5.5*totalPrice;
           cashBack=4;
       }
       else if (totalPrice>2000)
       {
           coin=7.5*totalPrice;
           cashBack=5;
       }
       else
        printf("\nwrong input");
   }

   coininRM=coin/1000;



   printf("\nuse %.2f your coin for a RM%.2f discount and %.2f cashback for this purchasing (Y: yes, N: no)? :",coin,coininRM,cashBack);
   scanf("%s",decision);

    if (decision=='Y'||'y')
    {
        finalPrice=totalPrice-discount-cashBack-coininRM;
        finalBd=finalPrice/3.07;
        printf("\n");
        printf("\nshooping channel and shop : %s",nameShop);
        printf("\npurchased item : %s",itemName);
        printf("\nnumber of unit : %.2f",unit);
        printf("\ntotal price(RM): %.2f",totalPrice);
        printf("\ngo green discount (RM): %.2f",discount);
        printf("\nfinal price (RM): %.2f",finalPrice);
        printf("\nfinal price (BD): %.2f",finalBd);
    }
    else
    {
        finalPrice=totalPrice-discount;
        finalBd=finalPrice/3.07;
        printf("\n");
        printf("\nshooping channel and shop : %s",nameShop);
        printf("\npurchased item : %s",itemName);
        printf("\nnumber of unit : %.2f",unit);
        printf("\ntotal price(RM): %.2f",totalPrice);
        printf("\ngo green discount (RM): %.2f",discount);
        printf("\nfinal price (RM): %.2f",finalPrice);
        printf("\nfinal price (BD): %.2f",finalBd);
    }
    printf("\ncontinue for next user:1,exit: 2:");
    scanf("%d",&user);
   }
   while (user==1);
    return 0;
}

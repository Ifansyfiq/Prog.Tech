#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function prototypes
postpaid();
int personal();
int business();
receipt();
addons(float*totalPrice);
printReceipt(const char receipt[15][100]);
outSys();
void prepaid();
float pay(float);

//global declarations
int mainFunction;
int plansType;
char planName[][100];
float totalPrice,basePrice,addPrice,sst,service;
float prices;
void addon();

//main function
main()
{


    printf("\n");
    printf("\n==================================================");
    printf("\n\tWELCOME TO THE i-MOBILE");
    printf("\n==================================================");
    printf("\n~~~    unlimited data just for you  :)         ~~~");
    printf("\n");

    printf("\nWhat Do You Wants To Do?");
    printf("\n>> Prepaid Service (1)");
    printf("\n>> Postpaid Service (2)");
    printf("\n>> Exit (3)");
    printf("\n-----------------------");
    printf("\nChoose Your Service : ");
    scanf("%d",&mainFunction);


    switch (mainFunction)
    {
    case 1 : prepaid();

    case 2 :  postpaid();

    case 3 : outSys();

    default : main();
    }




    return 0;
}



// prepaid functions
void prepaid()
 {
     int type;
     printf("----------------------------------\n");
     printf("   Welcome to prepaid service     \n");
     printf("----------------------------------\n");
     printf("        choose your plan          \n");
     printf("Click 1 for unlimited funz plan   \n");
     printf("Click 2 for unlimited power plan  \n");
     scanf("%d",&type);

     if (type==1)
     {
         int starter,add,go;
         printf("-------------------------------\n");
         printf("For unlimited funz plan, you get: \n");
         printf(">>Unlimited gaming\n");
         printf(">>Unlimited social\n");
         printf(">>Unlimited messaging\n");
         printf(">>Voice calls = 15 sen/30 sec to all networks\n");
         printf(">>SMS = 12 sen/SMS\n");
         printf(">>Basic internet = 1GB/month\n");
         printf(">>For u-mobile to u-mobile, max charge for voice call capped at  RM1, after that it will be free of charge\n");
         printf(">>Free unlimited internet upon top up of RM10\n");
         printf("\n");
         printf("Do you interested to buy this plan or exit? 1(yes) 0 (no)\n");
         scanf("%d",&go);
         if(go==1)
            {
             basePrice=15;
             printf("For Newcomer, there will be specialized starter pack for only RM 10 that worth of:\n");
             printf(">>Unlimited data for 10 apps\n");
             printf(">>call voice= 30sen / min\n");
             printf(">>SMS= 12sen / SMS\n");
             printf(">>Unlimited calls to u-mobile numbers for only RM1/day\n");
             printf(">>Validity= 5 days\n");
             printf("To activate starter pack, you must have at least RM6 in your account\n");
             printf("\n");
             printf("Do you want to buy our special starter pack? 1 (yes) 0 (no)\n");
             scanf("%d",&starter);
                if (starter==1)
                  {
                     basePrice=basePrice+10;
                  }

             printf("\n");
             printf("Do you want to power up your plan with add-on 1 (yes) 0 (no)\n");
             scanf("%d",&add);
                if (add==1)
                  {
                    addon();
                  }
                else
                 {
                    totalPrice=basePrice;
                 }
             strcpy(planName[0],"Unlimited Funz plan internet");
             sst=totalPrice*0.06;
             service=totalPrice*0.03;
             prices=totalPrice+sst+service;
             receipt();
              printReceipt(receipt);


            }
             else
            {
              outSys();
            }

     }
     else if (type==2)
     {
         int add,go;
         printf("-------------------------------\n");
         printf("For Unlimited power plan, you get: \n");
         printf(">>Unlimited data for app onz\n");
         printf(">>10 min daily free calls for all umobile numbers\n");
         printf(">>Voice calls = 14 sen/30 sec to all networks\n");
         printf(">>SMS = 12 sen/SMS\n");
         printf(">>Free 1GB basic internet every month\n");
         printf(">>Unlimited data for social apps upon top up of RM10\n");
         printf("\n");
         printf("Do you interested to buy this plan or exit? 1(yes) 0 (no)\n");
         scanf("%d",&go);
         if(go==1)
            {
              basePrice=12;
              printf("Upon activation of this plan, you will be preloaded with starter pack that worth of: \n");
              printf(">>200MB High speed internet\n");
              printf(">>10 days validity\n");
              printf("To receive starter pack, you must have a minimum of RM6 in your account\n");
              printf("\n");
              printf("Do you want to power up your plan with add-on 1 (yes) 0 (no)\n");
              scanf("%d",&add);
                if (add==1)
                  {
                   addon();
                  }
                strcpy(planName[0],"Unlimited power plan internet");
                sst=totalPrice*0.06;
                service=totalPrice*0.03;
                prices=totalPrice+sst+service;
                receipt();
                printReceipt(receipt);

            }
         else
            {
              outSys();
            }

      }

 }


//add ons prepaid
void addon()
{
    int type1,type2,pur;
    printf("--------------------------------------------------\n");
    printf("There are many types of add-on that can be choose from\n");
    printf("Click 1 for GX type\n");
    printf("Click 2 for booster type\n");
    printf("Click 3 for UMI type\n");
    printf("Click 4 for MB type\n");
    printf("Click 5 for EPIKKK type\n");
    printf("Click 6 for GT type\n");
    printf("Click 7 for Game type\n");
    printf("Click 8 for Exit\n");

    scanf("%d",&type1);
    if (type1==1)
    {
     printf("There are three types for GX types add-on\n");
     printf("click 1 for GX12 add-on\n");
     printf("click 2 for GX30 add-on\n");
     printf("click 3 for GX38 add-on\n");
     scanf("%d",&type2);
        if(type2==1)
        {
         printf(">>For GX12, you get\n");
         printf(">>Unlimited data internet\n");
         printf(">>3Mbps speed internet\n");
         printf(">>1GB hotspot\n");
         printf("7 Days validity\n");
         printf("price = RM12\n");
         addPrice=12;
         printf("Do you want to purchase GX12 add-on? 1 (yes) 0 (no)\n");
        }
        else if(type2==2)
        {
         printf(">>For GX30, you get\n");
         printf(">>Unlimited data internet\n");
         printf(">>6Mbps speed internet\n");
         printf(">>6GB hotspot\n");
         printf("30 Days validity\n");
         printf("price = RM30\n");
         addPrice=30;
         printf("Do you want to purchase GX30 add-on? 1 (yes) 0 (no)\n");
        }
        else if(type2==3)
        {
         printf(">>For GX38, you get\n");
         printf(">>Unlimited data internet\n");
         printf(">>6Mbps speed internet\n");
         printf(">>Unlimited call to all networks");
         printf(">>12GB hotspot\n");
         printf("30 Days validity");
         printf("price = RM35\n");
         addPrice=35;
         printf("Do you want to purchase GX38 add-on? 1 (yes) 0 (no)\n");
        }
    }
    else if (type1==2)
    {
     printf("There are three types for booster types add-on\n");
     printf("click 1 for turbo booster add-on\n");
     printf("click 2 for data booster 5 add-on\n");
     printf("click 3 for hotspot booster add-on\n");
     scanf("%d",&type2);
        if(type2==1)
        {
         printf("For turbo booster, you get\n");
         printf(">>Unlimited data internet\n");
         printf(">>unlimited high speed internet\n");
         printf(">>1 day validity\n");
         printf("price = RM5\n");
         addPrice=5;
         printf("Do you want to purchase turbo booster add-on? 1 (yes) 0 (no)\n");
        }
        else if (type2==2)
        {
         printf("For data booster 5, you get\n");
         printf(">>10GB data internet\n");
         printf(">>unlimited high speed internet\n");
         printf(">>14 days validity\n");
         printf("price = RM5\n");
         addPrice=5;
         printf("Do you want to purchase turbo booster add-on? 1 (yes) 0 (no)\n");
        }
        else if (type2==3)
        {
         printf("For hotspot booster, you get\n");
         printf(">>3GB hotspot data internet\n");
         printf(">>unlimited high speed hotspot internet\n");
         printf(">>3 days validity\n");
         printf("price = RM3\n");
         addPrice=3;
         printf("Do you want to purchase turbo booster add-on? 1 (yes) 0 (no)\n");
        }
    }
    else if (type1==3)
    {
     printf("There are six types for UMI types add-on\n");
     printf("click 1 for UMI20 add-on\n");
     printf("click 2 for UMI26 add-on\n");
     printf("click 3 for UMI30 add-on\n");
     printf("click 4 for UMI36 add-on\n");
     printf("click 5 for UMI38 add-on\n");
     printf("click 6 for UMI50 add-on\n");
     scanf("%d",&type2);

      if (type2==1)
      {
         printf("For UMI20, you get\n");
         printf(">>1.5GB high speed data internet\n");
         printf(">>500MB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>20 min voice call to all networks\n");
         printf(">>30 days validity\n");
         printf("price = RM20\n");
         addPrice=20;
         printf("Do you want to purchase UMI20 add-on? 1 (yes) 0 (no)\n");
      }
       else if (type2==2)
      {
         printf("For UMI26, you get\n");
         printf(">>2.5GB high speed data internet\n");
         printf(">>2.5GB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited whatsapp and wechat data\n");
         printf(">>30 days validity\n");
         printf("price = RM26\n");
         addPrice=26;
         printf("Do you want to purchase UMI26 add-on? 1 (yes) 0 (no)\n");
      }
        else if (type2==3)
      {
         printf("For UMI30, you get\n");
         printf(">>7.5GB high speed data internet\n");
         printf(">>2.5GB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>30 min voice call to all networks\n");
         printf(">>30 days validity\n");
         printf("price = RM30\n");
         addPrice=30;
         printf("Do you want to purchase UMI30 add-on? 1 (yes) 0 (no)\n");
      }
      else if (type2==4)
      {
         printf("For UMI36, you get\n");
         printf(">>7.5GB high speed data internet\n");
         printf(">>7.5GB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>Unlimited whatsapp and wechat data\n");
         printf(">>30 days validity\n");
         printf("price = RM36\n");
         addPrice=36;
         printf("Do you want to purchase UMI36 add-on? 1 (yes) 0 (no)");
      }
       else if (type2==5)
      {
         printf("For UMI38, you get\n");
         printf(">>2GB high speed data internet\n");
         printf(">>2GB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>150 min voice call to all networks\n");
         printf(">>30 SMS to all networks\n");
         printf(">>30 days validity\n");
         printf("price = RM38\n");
         addPrice=38;
         printf("Do you want to purchase UMI38 add-on? 1 (yes) 0 (no)");
      }
       else if (type2==6)
      {
         printf("For UM50, you get\n");
         printf(">>12GB high speed data internet\n");
         printf(">>10GB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>50 min voice call to all networks\n");
         printf(">>30 days validity\n");
         printf("price = RM50\n");
         addPrice=50;
         printf("Do you want to purchase UMI50 add-on? 1 (yes) 0 (no)");
      }

    }
    else if (type1==4)
    {
     printf("There are seven types for MB types add-on\n");
     printf("click 1 for MB-day add-on\n");
     printf("click 2 for MB-week add-on\n");
     printf("click 3 for MB-2 add-on\n");
     printf("click 4 for MB-15 add-on\n");
     printf("click 5 for MB-40 add-on\n");
     printf("click 6 for MB-68 add-on\n");
     printf("click 7 for MB-128 add-on\n");
     scanf("%d",&type2);
     if (type2==1)
      {
         printf("For MB-day, you get\n");
         printf(">>1.5GB high speed data internet\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>1 day validity\n");
         printf("price = RM5\n");
         addPrice=5;
         printf("Do you want to purchase MB-day add-on? 1 (yes) 0 (no)");
      }
     else if (type2==2)
      {
         printf("For MB-week, you get\n");
         printf(">>1GB high speed data internet\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>7 days validity\n");
         printf("price = RM9\n");
         addPrice=9;
         printf("Do you want to purchase MB-week add-on? 1 (yes) 0 (no)");
      }
      else if (type2==3)
      {
         printf("For MB-2, you get\n");
         printf(">>100MB high speed data internet\n");
         printf(">>1 day validity\n");
         printf("price = RM2\n");
         addPrice=2;
         printf("Do you want to purchase MB-2 add-on? 1 (yes) 0 (no)");
      }
      else if (type2==4)
      {
         printf("For MB-15, you get\n");
         printf(">>500MB high speed data internet\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>15 days validity\n");
         printf("price = RM15\n");
         addPrice=15;
         printf("Do you want to purchase MB-15 add-on? 1 (yes) 0 (no)");
      }
      else if (type2==5)
      {
         printf("For MB-40, you get\n");
         printf(">>3GB(2GB all day + 1GB from 2am-8am) high speed data internet\n");
         printf(">>2GB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>30 days validity\n");
         printf("price = RM40\n");
         addPrice=40;
         printf("Do you want to purchase MB-40 add-on? 1 (yes) 0 (no)\n");
      }
      else if (type2==6)
      {
         printf("For MB-68, you get\n");
         printf(">>8GB(5GB all day + 3GB from 2am-8am) high speed data internet\n");
         printf(">>5GB Video-onz data for video streaming\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>30 days validity\n");
         printf("price = RM68\n");
         addPrice=68;
         printf("Do you want to purchase MB-68 add-on? 1 (yes) 0 (no)\n");
      }
      else if (type2==7)
      {
         printf("For MB-128, you get\n");
         printf(">>1GB high speed data internet\n");
         printf(">>Unlimited Music-onz data for music streaming\n");
         printf(">>Unlimited Youtube and tonton data streaming from 2am-10am\n");
         printf(">>7 days validity\n");
         printf("price = RM128\n");
         addPrice=128;
         printf("Do you want to purchase MB-128 add-on? 1 (yes) 0( no)\n");
      }
    }
    else if (type1==5)
      {
        printf("There are one type for EPIKKK types add-on\n");
        printf("click 1 for EPIKKK Video3 add-on\n");
        scanf("%d",&type2);
        if (type2==1)
        {
           printf("For EPIKKK video3, you get\n");
           printf(">>3GB high speed data for youtube and tiktok streaming\n");
           printf(">>3 days validity\n");
           printf("price = RM3\n");
           addPrice=3;
           printf("Do you want to purchase EPIKKK video3 add-on? 1 (yes) 0 (no)\n");
        }
      }
     else if (type1==6)
      {
        printf("There are one type for GT types add-on\n");
        printf("click 1 for GT30 add-on\n");
        scanf("%d",&type2);
        if (type2==1)
        {
           printf("For GT30, you get\n");
           printf(">>1GB high speed data internet\n");
           printf(">>Unlimited calls to all networks\n");
           printf(">>30 days validity\n");
           printf("price = RM25\n");
           addPrice=25;
           printf("Do you want to purchase GT30 add-on? 1 (yes) 0 (no)\n");
        }
      }
      else if (type1==7)
      {
        printf("There are three types for Game types add-on\n");
        printf("click 1 for Gameonz18 add-on\n");
        printf("click 2 for Gameonz50 add-on\n");
        printf("click 3 for Gameonz70 add-on\n");
        scanf("%d",&type2);
        if (type2==1)
        {
           printf("For Gameonz18, you get\n");
           printf(">>Unlimited gaming data\n");
           printf(">>500MB high speed data internet\n");
           printf(">>Unlimited music-onz data for Music streaming\n");
           printf(">>7 days validity\n");
           printf("price = RM18\n");
           addPrice=18;
           printf("Do you want to purchase Gameonz18 add-on? 1 (yes) 0 (no)\n");
        }
        else if (type2==2)
        {
           printf("For Gameonz50, you get\n");
           printf(">>10GB gaming data\n");
           printf(">>2GB high speed data internet\n");
           printf(">>Unlimited music-onz data for Music streaming\n");
           printf(">>30 days validity\n");
           printf("price = RM50\n");
           addPrice=50;
           printf("Do you want to purchase Gameonz50 add-on? 1 (yes) 0 (no)\n");
        }
        else if (type2==3)
        {
           printf("For Gameonz70, you get\n");
           printf(">>Unlimited gaming data\n");
           printf(">>4GB high speed data internet\n");
           printf(">>Unlimited music-onz data for Music streaming\n");
           printf(">>30 days validity\n");
           printf("price = RM70\n");
           addPrice=70;
           printf("Do you want to purchase Gameonz70 add-on? 1 (yes) 0 (no)\n");
        }
      }
      else if (type1==8)
      {
          prepaid();
      }

    scanf("%d",&pur);
    if (pur==1)
    {
     totalPrice=pay(addPrice);
    }
    else
    {
      totalPrice=basePrice;
      addon();
    }

}



//payment add-on function (prepaid)
float pay(float x)
{
    float price2;
    price2=basePrice+x;
    return price2;
}



//postpaid function
postpaid()
{
    int choice,payment,upgrade;


    fflush(stdin);
     printf("\n==================================================");
    printf("\n\t\tPostpaid  Service");
    printf("\n==================================================");

    int user;
    do
    {
    printf("\npersonal(1) or business?(2):");
    scanf("%d",&user);
    }while (user>2);


    if (user==1)
    {

       choice=personal();
       if (choice==1)
       {
        printf("\n");
     printf("\n\t--YOUR PLANS--");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 1: RM30/month                           | ");
     printf("\n----------------------------------------------  ");
     printf("\n|>> 15GB data                                 | ");
     printf("\n|>> roaming (10 destinations with 1 GB data)  | ");
     printf("\n|>> 10GB communication apps                   | ");
     printf("\n|>> mobile hotspot 3GB data                   | ");
     printf("\n|>> video streaming quality  720p             | ");
      printf("\n---------------------------------------------- ");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n--------------------------------------- ");


     strcpy(planName[0],"PLAN 1 (personal)");
     basePrice=30;
     totalPrice=30;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\ndo you satisfy with this plans?");
     printf("\nbuy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         personal();
     }


       }
       else if (choice==2)
       {
           printf("\n");
     printf("\n\t--YOUR PLANS--");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 2: RM15/month                           | ");
     printf("\n----------------------------------------------  ");
     printf("\n|>> 15GB data                                 | ");
     printf("\n|>> roaming (5 destinations with 1 GB data)   | ");
     printf("\n|>> 20GB communication apps                   | ");
     printf("\n|>> mobile hotspot 5GB data                   | ");
     printf("\n|>> video streaming quality  720p             | ");
      printf("\n---------------------------------------------- ");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n--------------------------------------- ");


     strcpy(planName[0],"PLAN 2 (personal)");
     basePrice=15;
     totalPrice=15;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\ndo you satisfy with this plans?");
     printf("\nbuy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         personal();
     }

       }
       else if (choice==3)
       {
            printf("\n");
     printf("\n\t--YOUR PLANS--");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 3: RM58/month                           | ");
     printf("\n----------------------------------------------  ");
     printf("\n|>> 4G unlimited speed data                   | ");
     printf("\n|>> unlimited-calls to all network            | ");
     printf("\n|>> unlimited data                            | ");
     printf("\n|>> roaming (12 destinations with 1 GB data)  | ");
      printf("\n---------------------------------------------- ");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n--------------------------------------- ");


     strcpy(planName[0],"PLAN 3 (personal)");
     basePrice=58;
     totalPrice=58;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\ndo you satisfy with this plans?");
     printf("\nbuy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
        personal();
     }

       }
       else if (choice==4)
       {
            printf("\n");
     printf("\n\t--YOUR PLANS--");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 4: RM40/month                           | ");
     printf("\n----------------------------------------------  ");
     printf("\n|>> 4G unlimited speed data                   | ");
     printf("\n|>> unlimited-calls to all network            | ");
     printf("\n|>> unlimited data                            | ");
     printf("\n|>> mobile hotspot 5GB data                   | ");
      printf("\n---------------------------------------------- ");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n--------------------------------------- ");


     strcpy(planName[0],"PLAN 4 (personal)");
     basePrice=40;
     totalPrice=40;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         personal();
     }

       }
       else if (choice==5)
       {
         printf("\n");
     printf("\n----------------------------------------------");
     printf("\n|PLAN 5: RM79/month                           |");
     printf("\n----------------------------------------------");
     printf("\n|>> video unlimited  data                     |");
     printf("\n|>> music unlimited  data                     |");
     printf("\n|>> whatssap & instagram unlimited  data      |");
     printf("\n|>> roaming (12 destinations with 1 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 60GB data                  |");
     printf("\n|>> unlimited-calls to all network            |");
      printf("\n----------------------------------------------");
     printf("\n---------------------------------------");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n---------------------------------------");



     strcpy(planName[0],"PLAN 5 (personal)");
     basePrice=79;
     totalPrice=79;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         personal();
     }

       }
       else if (choice==6)
       {
           printf("\n");
     printf("\n----------------------------------------------");
     printf("\n|PLAN 6: RM120/month                          |");
     printf("\n----------------------------------------------");
     printf("\n|>> unlimited high-speed data                 |");
     printf("\n|>> roaming (36 destinations with 3 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 100GB data                 |");
     printf("\n|>> video streaming quality unlimited HD      |");
      printf("\n----------------------------------------------");
     printf("\n---------------------------------------");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 10sen/SMS               |");
     printf("\n|to other networks - 10sen/SMS         |");
     printf("\n---------------------------------------");



     strcpy(planName[0],"PLAN 6 (personal)");
     basePrice=120;
     totalPrice=120;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
        personal();
     }

       }
       else if (choice==7)
       {
               printf("\n");
     printf("\n----------------------------------------------");
     printf("\n|PLAN 7: RM86/month                           |");
     printf("\n----------------------------------------------");
     printf("\n|>> unlimited high-speed data                 |");
     printf("\n|>> roaming (12 destinations with 3 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 60GB data                  |");
     printf("\n|>> video streaming quality unlimited HD      |");
      printf("\n----------------------------------------------");
     printf("\n---------------------------------------");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 10sen/SMS               |");
     printf("\n|to other networks - 10sen/SMS         |");
     printf("\n---------------------------------------");



     strcpy(planName[0],"PLAN 7 (personal)");
     basePrice=86;
     totalPrice=86;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         personal();
     }

       }
       else
       {
           printf("\n");
           printf("\nwrong choice, input your choice back!!");
           personal();
       }
    }
    else
    {
        choice=business();
        if (choice==1)
        {
             printf("\n");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 1: RM140/month                          |");
     printf("\n---------------------------------------------- ");
     printf("\n|>> 4G unlimited high-speed data(no speed cap)|");
     printf("\n|>> unlimited-calls to all network            |");
     printf("\n|>> roaming (36 destinations with 3 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 100GB data                 |");
     printf("\n|>> video streaming quality unlimited HD      |");
      printf("\n----------------------------------------------");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 10sen/SMS               |");
     printf("\n|to other networks - 10sen/SMS         |");
     printf("\n--------------------------------------- ");

     strcpy(planName[0],"PLAN 1 (business)");
     basePrice=140;
     totalPrice=140;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         business();
     }

    }


        else if (choice==2)
        {
            printf("\n");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 2: RM86/month                           |");
     printf("\n---------------------------------------------- ");
     printf("\n|>> 4G unlimited high-speed data(no speed cap)|");
     printf("\n|>> unlimited-calls to all network            |");
     printf("\n|>> roaming (12 destinations with 3 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 60GB data                  |");
     printf("\n|>> video streaming quality unlimited HD      |");
      printf("\n----------------------------------------------");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 10sen/SMS               |");
     printf("\n|to other networks - 10sen/SMS         |");
     printf("\n--------------------------------------- ");

     strcpy(planName[0],"PLAN 2 (business)");
     basePrice=86;
     totalPrice=86;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         business();
     }
        }


        else if (choice==3)
        {
          printf("\n");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 3(premium): RM168/month                 |");
     printf("\n---------------------------------------------- ");
     printf("\n|>> 4G unlimited high-speed data(no speed cap)|");
     printf("\n|>> unlimited-calls to all network            |");
     printf("\n|>> unlimited music                           |");
     printf("\n|>> unlimited applications internet           |");
     printf("\n|>> roaming (36 destinations with 5 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 60GB data                  |");
     printf("\n|>> video streaming quality unlimited HD      |");
      printf("\n----------------------------------------------");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n--------------------------------------- ");
     printf("\n---------------------------------------");
     printf("\n|Free SMS                              |");
     printf("\n|to I-mobile - 400 SMS                 |");
     printf("\n|to other networks - 400 SMS           |");
     printf("\n--------------------------------------- ");

     strcpy(planName[0],"PLAN 3/premium (business)");
     basePrice=168;
     totalPrice=168;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         business();
     }

        }


        else if (choice==4)
        {
            printf("\n");
     printf("\n----------------------------------------------+");
     printf("\n|PLAN 4(platinum): RM498/month                |");
     printf("\n---------------------------------------------- ");
     printf("\n|>> 4G unlimited high-speed data(no speed cap)|");
     printf("\n|>> unlimited-calls to all network            |");
     printf("\n|>> unlimited music                           |");
     printf("\n|>> unlimited applications internet           |");
     printf("\n|>> roaming (36 destinations with 8 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 100GB data                 |");
     printf("\n|>> video streaming quality unlimited FHD     |");
      printf("\n----------------------------------------------");
     printf("\n--------------------------------------- ");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n--------------------------------------- ");
     printf("\n---------------------------------------");
     printf("\n|Free SMS                              |");
     printf("\n|to I-mobile - 1200 SMS                |");
     printf("\n|to other networks - 1200 SMS          |");
     printf("\n--------------------------------------- ");

     strcpy(planName[0],"PLAN 4/platinum (business)");
     basePrice=498;
     totalPrice=498;

     printf("\n");
     printf("\nwants to upgrade your plans or not?, yes(1),no(2):");
     scanf("%d",&upgrade);

     if (upgrade==1)
     {
         addons(&totalPrice);
     }

     sst = (0.06*totalPrice);
     service = (0.03*totalPrice);
     totalPrice = totalPrice + sst + service;
     printf("\nyour total price= RM%.2f/month",totalPrice);
     printf("\n^^including service tax(3%%) and sst(6%%)^^");

     printf("\n");
     printf("\n do you satisfy with this plans?");
     printf("\n wants buy plan(1),exit(2) :");
     scanf("%d",&payment);

     if (payment==1)
     {
         receipt();
     }
     else
     {
         business();
     }

        }


        else
        {
           printf("\n");
           printf("\nwrong choice, input your choice back!!");
           business();
        }

    }


}


//personal function
int personal()
{
    int planChoice;

    fflush(stdin);
     printf("\n==================================================");
    printf("\n\twelcome to personal postpaid");
     printf("\n==================================================");
     printf("\n");

     printf("\nwhat plan do you prefer?");
     printf("\nbudget plans(1) or standard plans(2) or premium plans(3) or exit(0):");
     scanf("%d",&plansType);


     if (plansType==1)
     {
     //budget plans
      printf("\n");
      printf("\n\t\t\t\t\t+++++++++++++++++++++++++");
      printf("\n\t\t\t\t\t+BUDGET PLANS (PERSONAL)+");
      printf("\n\t\t\t\t\t+++++++++++++++++++++++++");
     printf("\n----------------------------------------------+                  ----------------------------------------------");
     printf("\n|PLAN 1: RM30/month                           |                  |PLAN 2: RM15/month                           |");
     printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n|>> 15GB data                                 |                  |>> 10GB data                                 |");
     printf("\n|>> roaming (10 destinations with 1 GB data)  |                  |>> roaming (5 destinations with 1 GB data)   |");
     printf("\n|>> 20GB communication apps                   |                  |>> 10GB communication apps                   |");
     printf("\n|>> mobile hotspot 5GB data                   |                  |>> mobile hotspot 3GB data                   |");
     printf("\n|>> video streaming quality  720p             |                  |>> video streaming quality  720p              |");
      printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n---------------------------------------                          ---------------------------------------");
     printf("\n|SMS rates                             |                         |SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |                         |to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |                         |to other networks - 8sen/SMS          |");
     printf("\n---------------------------------------                          ---------------------------------------");

     printf("\n");
     do
     {
     printf("\npick your plan either plan (1) or plan (2) : ");
     scanf("%d",&planChoice);
     }while (planChoice!=1&&planChoice!=2);

     }

    else if (plansType==2)
    {
    //standard plans
     printf("\n");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++");
     printf("\n\t\t\t\t\t+STANDARD PLANS (PERSONAL)+");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++");
     printf("\n----------------------------------------------+                  ----------------------------------------------");
     printf("\n|PLAN 3: RM58/month                           |                  |PLAN 4: RM40/month                           |");
     printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n|>> 4G unlimited speed data                   |                  |>> 4G unlimited speed data                   |");
     printf("\n|>> unlimited-calls to all network            |                  |>> unlimited-calls to all network            |");
     printf("\n|>> unlimited data                            |                  |>> unlimited data                            |");
     printf("\n|>> roaming (12 destinations with 1 GB data)  |                  |>> mobile hotspot 5GB data                   |");
      printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n---------------------------------------                          ---------------------------------------");
     printf("\n|SMS rates                             |                         |SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |                         |to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |                         |to other networks - 8sen/SMS          |");
     printf("\n---------------------------------------                          ---------------------------------------");

     printf("\n");
     printf("\n----------------------------------------------");
     printf("\n|PLAN 5: RM79/month                           |");
     printf("\n----------------------------------------------");
     printf("\n|>> video unlimited  data                     |");
     printf("\n|>> music unlimited  data                     |");
     printf("\n|>> whatssap & instagram unlimited  data      |");
     printf("\n|>> roaming (12 destinations with 1 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 60GB data                  |");
     printf("\n|>> unlimited-calls to all network            |");
      printf("\n----------------------------------------------");
     printf("\n---------------------------------------");
     printf("\n|SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |");
     printf("\n---------------------------------------");

         printf("\n");
         do
         {
             printf("\npick your plan either plan (3) or plan (4) or plan (5)) : ");
            scanf("%d",&planChoice);
         }while (planChoice!=3&&planChoice!=4&&planChoice!=5);

    }

    else if(plansType==3)
    {
      //premium plans
     printf("\n");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++");
     printf("\n\t\t\t\t\t+PREMIUM PLANS (PERSONAL)+");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++");
     printf("\n----------------------------------------------+                  ----------------------------------------------");
     printf("\n|PLAN 6: RM120/month                          |                  |PLAN 7: RM86/month                           |");
     printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n|>> unlimited high-speed data                 |                  |>> unlimited high-speed data                 |");
     printf("\n|>> roaming (36 destinations with 3 GB data)  |                  |>> roaming (12 destinations with 3 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |                  |>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 100GB data                 |                  |>> mobile hotspot 60GB data                  |");
     printf("\n|>> video streaming quality unlimited HD      |                  |>> video streaming quality unlimited HD      |");
      printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n---------------------------------------                          ---------------------------------------");
     printf("\n|SMS rates                             |                         |SMS rates                             |");
     printf("\n|to I-mobile - 10sen/SMS               |                         |to I-mobile - 10sen/SMS               |");
     printf("\n|to other networks - 10sen/SMS         |                         |to other networks - 10sen/SMS         |");
     printf("\n---------------------------------------                          ---------------------------------------");

         printf("\n");
         do
         {
            printf("\npick your plan either plan (6) or plan (7) : ");
           scanf("%d",&planChoice);
         }while (planChoice!=6&&planChoice!=7);

    }

    else if (plansType==0)
    {
        postpaid();
    }

    else
    {
        printf("\nPLANS NOT EXIST....SORRY :(");
        personal();
    }

    return planChoice; //return to postpaid function

}


//business function
int business()
{
    int planChoice;

    fflush(stdin);
     printf("\n==================================================");
    printf("\n\twelcome to business postpaid");
     printf("\n==================================================");
     printf("\n");

      printf("\nwhat plan do you prefer?");
     printf("\nbudget plans(1) or prestige plans(2) or exit(0):");
     scanf("%d",&plansType);


     if (plansType==1)
     {
       //standard plans
     printf("\n");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++++");
     printf("\n\t\t\t\t\t+STANDARD PLANS (BUSINESS)+");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++++");
     printf("\n----------------------------------------------+                  ----------------------------------------------");
     printf("\n|PLAN 1: RM140/month                          |                  |PLAN 2: RM99/month                           |");
     printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n|>> 4G unlimited high-speed data(no speed cap)|                  |>> 4G unlimited high-speed data(no speed cap)|");
     printf("\n|>> unlimited-calls to all network            |                  |>> unlimited-calls to all network            |");
     printf("\n|>> roaming (36 destinations with 3 GB data)  |                  |>> roaming (12 destinations with 3 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |                  |>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 100GB data                 |                  |>> mobile hotspot 60GB data                  |");
     printf("\n|>> video streaming quality unlimited HD      |                  |>> video streaming quality unlimited HD      |");
      printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n---------------------------------------                          ---------------------------------------");
     printf("\n|SMS rates                             |                         |SMS rates                             |");
     printf("\n|to I-mobile - 10sen/SMS               |                         |to I-mobile - 10sen/SMS               |");
     printf("\n|to other networks - 10sen/SMS         |                         |to other networks - 10sen/SMS         |");
     printf("\n---------------------------------------                          ---------------------------------------");

      printf("\n");
         do
         {
            printf("\npick your plan either plan (1) or plan (2) : ");
           scanf("%d",&planChoice);
         }while (planChoice!=1&&planChoice!=2);


     }

    else if (plansType==2)
    {
      //prestige plan
     printf("\n");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++++");
     printf("\n\t\t\t\t\t+PRESTIGE PLANS (BUSINESS)+");
     printf("\n\t\t\t\t\t+++++++++++++++++++++++++++");
     printf("\n----------------------------------------------+                  ----------------------------------------------");
     printf("\n|PLAN 3(premium): RM168/month                 |                  |PLAN 4(platinum): RM498/month                |");
     printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n|>> 4G unlimited high-speed data(no speed cap)|                  |>> 4G unlimited high-speed data(no speed cap)|");
     printf("\n|>> unlimited-calls to all network            |                  |>> unlimited-calls to all network            |");
     printf("\n|>> unlimited music                           |                  |>> unlimited music                           |");
     printf("\n|>> unlimited applications internet           |                  |>> unlimited applications internet           |");
     printf("\n|>> roaming (36 destinations with 5 GB data)  |                  |>> roaming (36 destinations with 8 GB data)  |");
     printf("\n|>> get share 20 line,RM20/month              |                  |>> get share 20 line,RM20/month              |");
     printf("\n|>> mobile hotspot 60GB data                  |                  |>> mobile hotspot 100GB data                 |");
     printf("\n|>> video streaming quality unlimited HD      |                  |>> video streaming quality unlimited FHD     |");
      printf("\n----------------------------------------------                   ----------------------------------------------");
     printf("\n---------------------------------------                          ---------------------------------------");
     printf("\n|SMS rates                             |                         |SMS rates                             |");
     printf("\n|to I-mobile - 3sen/SMS                |                         |to I-mobile - 3sen/SMS                |");
     printf("\n|to other networks - 8sen/SMS          |                         |to other networks - 8sen/SMS          |");
     printf("\n---------------------------------------                          ---------------------------------------");
     printf("\n---------------------------------------                          ---------------------------------------");
     printf("\n|Free SMS                              |                         |Free SMS                              |");
     printf("\n|to I-mobile - 400 SMS                 |                         |to I-mobile - 1200 SMS                |");
     printf("\n|to other networks - 400 SMS           |                         |to other networks - 1200 SMS          |");
     printf("\n---------------------------------------                          ---------------------------------------");

      printf("\n");
         do
         {
            printf("\npick your plan either plan (3) or plan (4) : ");
           scanf("%d",&planChoice);
         }while (planChoice!=3&&planChoice!=4);


    }

    else if (plansType==0)
    {
        postpaid();
    }


     else
    {
        printf("\nPLANS NOT EXIST....SORRY :(");
        business();
    }

    return planChoice; //return to postpaid function

}




//addons function postpaid
addons(float*totalPrice)
{
    int data,hotspot;

   printf("\nwants to add 5GB data speed? (+RM10)");
   printf("\nyes(1),no(2):");
   scanf("%d",&data);
   if (data==1)
   {
       *totalPrice=*totalPrice+10;
       addPrice=10;
   }

   printf("\nwants to add 2GB mobile hotspot? (+RM5)");
   printf("\nyes(1),no(2):");
   scanf("%d",&hotspot);
   if (hotspot==1)
   {
       *totalPrice=*totalPrice+5;
       addPrice=15;
   }

}





//receipt function
receipt()
{

    int reg;
    char receipt[15][100];

    printf("\n");
    printf("\n******READ THE REGULATIONS AND TERMS********");

    FILE * input;
    input = fopen("RegulationsLaw.txt", "r");

    char evo[100];

    while (!feof(input))
    {
        fgets (evo, 100, input);
        puts (evo);
    }

    fclose (input);

    printf("\n********************************************");

    printf("\nDo You Accept With This Regulations?");
    printf("\nyes (1), no(2):");
    scanf("%d",&reg);

    if (reg==1)
    {
    printf("\nPERSONAL DETAILS");
    fflush(stdin);
    printf("\nfull name:");
    scanf(" %[^\n]",&receipt[0]);
    fflush(stdin);
    printf("\nID number:");
   scanf(" %[^\n]",&receipt[1]);
    fflush(stdin);
    printf("\nemail:");
    scanf(" %[^\n]",&receipt[2]);
    fflush(stdin);
    printf("\ngender (L)/(P):");
    scanf(" %[^\n]",&receipt[3]);
    fflush(stdin);
    printf("\ndate of birth:");
    scanf(" %[^\n]",&receipt[4]);
    fflush(stdin);
    printf("\nmonth of birth:");
    scanf(" %[^\n]",&receipt[5]);
    fflush(stdin);
    printf("\nyear of birth:");
    scanf(" %[^\n]",&receipt[6]);
    fflush(stdin);


    printf("\nBILLING DETAILS");
    fflush(stdin);
    printf("\naddress:");
    scanf(" %[^\n]",&receipt[7]);
    fflush(stdin);
    printf("\npostcode:");
    scanf(" %[^\n]",&receipt[8]);
    fflush(stdin);
    printf("\ncity:");
    scanf(" %[^\n]",&receipt[9]);
    fflush(stdin);
    printf("\nstate:");
    scanf(" %[^\n]",&receipt[10]);
    fflush(stdin);
    printf("\ncontact no.:");
    scanf(" %[^\n]",&receipt[11]);
    fflush(stdin);

    printf("\nPORT IN DETAILS");
    fflush(stdin);
    printf("\ncurrent service provider (digi,celcom,etc):");
    scanf(" %[^\n]",&receipt[12]);
    fflush(stdin);
    printf("\ncurrent mobile no.:");
    scanf(" %[^\n]",&receipt[13]);
    fflush(stdin);

     printReceipt(receipt);
    }
    else
    {
        outSys();
    }




}




//print receipt function
printReceipt(const char receipt[15][100])
{
    int m;

  printf("\n");
  printf("\n\t========================");
  printf("\n\t   I-MOBILE RECEIPT");
  printf("\n\t========================");


   FILE *finput;
    finput = fopen("receipt.txt","w");

        fprintf(finput,"\n++++++++++++++++++++++++++++++");
      fprintf(finput,"\nPERSONAL DETAILS");
      fprintf(finput,"\n++++++++++++++++++++++++++++++");
     fprintf(finput,"\n1) name: %s",receipt[0]);
     fprintf(finput,"\n2) ID number: %s",receipt[1]);
     fprintf(finput,"\n3) email: %s",receipt[2]);
     fprintf(finput,"\n4) gender (L)/(P): %s",receipt[3]);
      fprintf(finput,"\n5) date of birth: %s/%s/%s",receipt[4],receipt[5],receipt[6]);


    fprintf(finput,"\n");
    fprintf(finput,"\n++++++++++++++++++++++++++++++");
    fprintf(finput,"\nBILLING DETAILS");
    fprintf(finput,"\n++++++++++++++++++++++++++++++");
    fprintf(finput,"\n1) address: %s",receipt[7]);
    fprintf(finput,"\n2) postcode: %s",receipt[8]);
    fprintf(finput,"\n3) city: %s",receipt[9]);
    fprintf(finput,"\n4) state: %s",receipt[10]);
    fprintf(finput,"\n5) contact no.: %s",receipt[11]);

    fprintf(finput,"\n");
    fprintf(finput,"\n++++++++++++++++++++++++++++++");
    fprintf(finput,"\nPORT IN DETAILS");
    fprintf(finput,"\n++++++++++++++++++++++++++++++");
    fprintf(finput,"\n1) current service provider (digi,celcom,etc): %s",receipt[12]);
    fprintf(finput,"\n2) current mobile no.: %s",receipt[13]);

    fprintf(finput,"\n");
    fprintf(finput,"\n++++++++++++++++++++++++++++++");
    fprintf(finput,"\nPAYMENT DETAILS");
    fprintf(finput,"\n++++++++++++++++++++++++++++++");
    fprintf(finput,"\nplan name : %s",planName[0]);
    fprintf(finput,"\nbase plan price : RM%.2f",basePrice);
    fprintf(finput,"\nadd ons plans : RM%.2f",addPrice);
    fprintf(finput,"\nsst tax (6%%): RM%.2f",sst);
    fprintf(finput,"\nservice tax (3%%) : RM%.2f",service);
    fprintf(finput,"\n------------------------------");

    if (mainFunction==1)
    {
    fprintf(finput,"\nYOUR TOTAL PRICE : RM%.2f / month",prices);
    fprintf(finput,"\n------------------------------");
    }
    else
    {
    fprintf(finput,"\nYOUR TOTAL PRICE : RM%.2f / month",totalPrice);
    fprintf(finput,"\n------------------------------");
    }

    fclose(finput);



  printf("\n++++++++++++++++++++++++++++++");
  printf("\nPERSONAL DETAILS");
  printf("\n++++++++++++++++++++++++++++++");
  printf("\n1) name: %s",receipt[0]);
  printf("\n2) ID number: %s",receipt[1]);
  printf("\n3) email: %s",receipt[2]);
  printf("\n4) gender (L)/(P): %s",receipt[3]);
  printf("\n5) date of birth: %s/%s/%s",receipt[4],receipt[5],receipt[6]);


    printf("\n");
    printf("\n++++++++++++++++++++++++++++++");
    printf("\nBILLING DETAILS");
    printf("\n++++++++++++++++++++++++++++++");
    printf("\n1) address: %s",receipt[7]);
    printf("\n2) postcode: %s",receipt[8]);
    printf("\n3) city: %s",receipt[9]);
    printf("\n4) state: %s",receipt[10]);
    printf("\n5) contact no.: %s",receipt[11]);

    printf("\n");
    printf("\n++++++++++++++++++++++++++++++");
    printf("\nPORT IN DETAILS");
    printf("\n++++++++++++++++++++++++++++++");
    printf("\n1) current service provider (digi,celcom,etc): %s",receipt[12]);
    printf("\n2) current mobile no.: %s",receipt[13]);

    printf("\n");
    printf("\n++++++++++++++++++++++++++++++");
    printf("\nPAYMENT DETAILS");
    printf("\n++++++++++++++++++++++++++++++");
    printf("\nplan name : %s",planName[0]);
    printf("\nbase plan price : RM%.2f",basePrice);
    printf("\nadd ons plans : RM%.2f",addPrice);
    printf("\nsst tax (6%%): RM%.2f",sst);
    printf("\nservice tax (3%%) : RM%.2f",service);
    printf("\n------------------------------");

    if (mainFunction==1)
    {
    printf("\nYOUR TOTAL PRICE : RM%.2f / month",prices);
    printf("\n------------------------------");
    }
    else
    printf("\nYOUR TOTAL PRICE : RM%.2f / month",totalPrice);
    printf("\n------------------------------");


    outSys();

}


//exit function
outSys()
{
    printf("\n");
    printf("\n-------------------------------------------------------------");
    printf("\n\t\tTHANK YOU AND COME AGAIN ");
    printf("\n-------------------------------------------------------------");
    exit(0); //exit system
}






















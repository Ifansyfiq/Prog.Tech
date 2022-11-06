#include <stdio.h>
#include <string.h>

int main()
{
   char name[50],stdntID[10],room[10],dates[3],month[3],year[5];
   int item;

   printf("\n\tUMP electrical appliance registration form");
   printf("\n============================================================");
   printf("\n");

   printf("\nname:");
   gets(name);
   fflush(stdin);
   printf("\nstudent ID:");
   gets(stdntID);
   fflush(stdin);
   printf("\nroom:");
   gets(room);
   fflush(stdin);

   printf("\ninput date today:");
   scanf("%s",dates);
   fflush(stdin);
   printf("\ninput month today:");
   scanf("%s",month);
   fflush(stdin);
   printf("\ninput year today:");
   scanf("%s",year);
   fflush(stdin);

   do
    {
    printf("\nhow many items do you want to register?:");
   scanf("%d",&item);
   if (item>3)
     printf("\nonly 3 electrical appliances are allowed in 1 semester");
   }
   while (item>3);

   int i,j;
   char nameItem[item][50];
   fflush(stdin);
   int priceItem[item],counter;

   for (i=0;i<item;i++)
   {
       do
        {
        counter=0;
       printf("\npick this items only:");
       printf("\n1.rice cooker-RM7.00");
       printf("\n2.radio-RM3.00");
       printf("\n3.iron-RM5.00");
       printf("\n4.charger-RM2.00");
       printf("\n4.kettle-RM3.00");
       printf("\n");

         printf("\nenter item %d name:",i+1);
          scanf(" %[^\n]",&nameItem[i]);
          fflush(stdin);

         if (strcmp(nameItem[i],"rice cooker")==0)
           {
               priceItem[i]=7;
           }
           else if (strcmp(nameItem[i],"radio")==0)
           {
                priceItem[i]=3;
           }
            else if (strcmp(nameItem[i],"iron")==0)
           {
                priceItem[i]=5;
           }
            else if (strcmp(nameItem[i],"charger")==0)
           {
               priceItem[i]=2;
           }
            else if (strcmp(nameItem[i],"kettle")==0)
           {
                priceItem[i]=3;
           }
           else
           {
            printf("\nthe electrical appliance is not allowed in the hostel room !!");
            printf("\n");
            counter=1;
           }

       }while (counter==1);

   }


   int total=0;
   for (j=0;j<item;j++)
   {
       total+=priceItem[j];
   }

   printf("\n\tUMP electrical appliance registration form");
   printf("\n============================================================");
   printf("\n");

   printf("\nname:");
   puts(name);
   printf("\nstudent ID:");
   puts(stdntID);
   printf("\nroom:");
   puts(room);
   printf("\n============================================================");
   printf("\nitem                     fee(RM)");
   printf("\n------------------------------------");

   int k;
   for (k=0;k<item;k++)
   {
      printf("\n%s\t\t\t%d.00",nameItem[k],priceItem[k]);
   }

   printf("\n------------------------------------");
   printf("\ntotal:                  %d.00",total);
   printf("\n------------------------------------");
   printf("\nissue date: %s/ %s/ %s",dates,month,year);
   printf("\n============================================================");



    return 0;
}


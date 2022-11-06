#include<stdio.h>
#define fee 1200

int main()
{
   float noNight,accmdton,ochestra,piano,cd,totalOchestra,totalPiano,totalCd,totalUsd,totalRm;

   printf("\nnumber of night:");
   scanf("%f",&noNight);
   printf("\nduration of orchestra rehearsal:");
   scanf("%f",&ochestra);
   printf("\nduration of piano rehearsal:");
   scanf("%f",&piano);
   printf("\nnumber of CD:");
   scanf("%f",&cd);

   printf("----------------------------------------------");

   accmdton=noNight*150;
   totalOchestra=420*ochestra/60;
   totalPiano=120*piano/60;
   totalCd=cd*150;
   totalUsd=accmdton+totalOchestra+totalPiano+totalCd+fee;
   totalRm=totalUsd*4.07;

   printf("\ntotal in USD: %.2f",totalUsd);
   printf("\ntotal in RM: %.2f",totalRm);
   printf("\n");


    return 0;
}

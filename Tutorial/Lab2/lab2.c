#include <stdio.h>

int main()
{
float handsOn,assignments,examFinal,total,handsOncarry,assignmentsCarry,examFinalCarry;

printf("\ninput three hands-on test score (over 100):");
scanf("%f",&handsOn);
printf("\ninput two assignments test score (over 100):");
scanf("%f",&assignments);
printf("\ninput final exam score (over 100):");
scanf("%f",&examFinal);

handsOncarry=handsOn/100*30;
assignmentsCarry=assignments/100*20;
examFinalCarry=examFinal/100*50;

total=handsOncarry+assignmentsCarry+examFinalCarry;

printf("\nyour total mark is : %.1f%% ",total);

return 0;
}

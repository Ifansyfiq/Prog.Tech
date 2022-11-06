#include <stdio.h>
#include <math.h>

clinical();

int main()
{
    int sneez,diarr,hvyBrth,loop;

    printf("\nCOVID-19 FRONTLINER SYSTEM");
    printf("\n");
    printf("\n");

    do
    {
    printf("\nSYMPTOMS OBSERVATION");
    printf("\n");
    printf("\nDid patient sneezing? <1> Yes <2> No :");
    scanf("%d",&sneez);
    printf("\nDid patient diarrhea? <1> Yes <2> No :");
    scanf("%d",&diarr);
    printf("\nDid patient felt heavy breathing? <1> Yes <2> No :");
    scanf("%d",&hvyBrth);

    if (sneez==2&&diarr==1&&hvyBrth==1)
    {
      printf("\nPatient is COVID-19 suspect. Action : Clinical Obesrvation.");
      clinical();

    }
    else if (sneez==2&&diarr==1&&hvyBrth==2)
    {
        printf("\nPatient is INFLUENZA suspect. Action : Respiratory Derpartment.");
    }
    else if (sneez==1&&diarr==2&&hvyBrth==2)
    {
        printf("\nPatient is FEVER suspect. Action : General Patient Derpartment.");
    }
    else
      printf("\nPatient is OTHER ILLNESS suspect. Action : General Patient Derpartment.");

    printf("\n");
    printf("\nNext Patient? <1> Yes <2> No :");
    scanf("%d",&loop);

    }
    while (loop==1);


    return 0;
}

clinical()
{
    float days,cellCount,cellPercnt,Tvalue;

    printf("\n");
    printf("\nCLINICAL OBSERVATION");
    printf("\n");
    printf("\nPlease insert how many days of prediction :");
    scanf("%f",&days);
    printf("\nPlease insert T-Cell cell count :");
    scanf("%f",&cellCount);
    printf("\nPlease insert T-Cell cell decay rate in percent <negative> :");
    scanf("%f",&cellPercnt);


    Tvalue = cellCount*exp(cellPercnt*days);

    printf("\nExpected T-Cell count after %.1f days is %.3f .",days,Tvalue);


    if (Tvalue<800)
    {
     printf("\nPatient is COVID-19 POSITIVE suspect. Action : RED ALERT. ICU.");
    }
    else
      printf("\nPatient is COVID-19 suspect. Action : Home quarantine for 14 days.");





     printf("\n");
     printf("\n");
}

























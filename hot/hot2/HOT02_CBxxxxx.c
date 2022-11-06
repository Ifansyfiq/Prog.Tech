#include <stdio.h>
#include <string.h>

float longest(const float attempt[5]);
float average(const float attempt[5]);
display(const char info[3][50],const float attempt[5],float longestValue,float averageValue);

int main()
{
    int i;
    char info[3][50];
    float attempt[5],longestValue,averageValue;


    printf("\nParticipant  name:");
    scanf(" %[^\n]",&info[0]);
    fflush(stdin);
    printf("\nParticipant no:");
    scanf(" %[^\n]",&info[1]);
    fflush(stdin);
    printf("\nParticipant team:");
    scanf(" %[^\n]",&info[2]);
    fflush(stdin);


    printf("\n");
    printf("\nJumping information  (in meter):");


    for (i=0;i<5;i++)
    {
        printf("\nAttempt %d. = ",i+1);
        scanf("%f",&attempt[i]);
    }

    longestValue = longest(attempt);
    averageValue = average(attempt);

    display(info,attempt,longestValue,averageValue);


    return 0;
}

float longest(const float attempt[5])
{
 float maxV;
 int j;

 maxV = attempt[0];

     for (j=0;j<5;j++)
    {
        if (attempt[j] > maxV)
           maxV = attempt[j];
    }

    return maxV;

}

float average(const float attempt[5])
{
    float avg=0;
    int k;

       for (k=0;k<5;k++)
    {
      avg+=attempt[k];
    }

    avg=avg/5;

    return avg;
}

display(const char info[3][50],const float attempt[5],float longestValue,float averageValue)
{
    int m;

    printf("\n");
    printf("\n---------Result information----------");

    printf("\n");
    printf("\nPARTICIPANT INFORMATION");
    printf("\nName: %s",info[0]);
    printf("\nNo.: %s",info[1]);
    printf("\nTeam: %s",info[2]);
    printf("\n");

    printf("\n");
    printf("\nJUMPING INFORMATION");
    for (m=0;m<5;m++)
    {
        printf("\nAttempt %d. = %.2f meter",m+1,attempt[m]);
    }

    printf("\n");
    printf("\nLongest jump: %.2f meter",longestValue);
    printf("\nAverage jump: %.2f meter",averageValue);
    printf("\n");

}







#include<stdio.h>

float calculate(float *total,float *average);

int main()
{
    float total,average;

    calculate(&total,&average);

    printf("\nyour total mark: %.2f",total);
    printf("\nyour average mark: %.2f",average);

    return 0;
}

float calculate(float *x,float *y)
{
    float mark1,mark2,mark3,mark4,mark5;

    printf("\ninput your mark1 :");
    scanf("%f",&mark1);
    printf("\ninput your mark2 :");
    scanf("%f",&mark2);
    printf("\ninput your mark3 :");
    scanf("%f",&mark3);
    printf("\ninput your mark4 :");
    scanf("%f",&mark4);
    printf("\ninput your mark5 :");
    scanf("%f",&mark5);

    *x=mark1+mark2+mark3+mark4+mark5;
    *y=*x/5;

}

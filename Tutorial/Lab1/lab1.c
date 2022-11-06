#include <stdio.h>

int main ()
{
float height, weight, bmi, heightmeter;

    printf("Enter height in centimeter\n");
    scanf("%f", &height);

    printf("Enter weight in kg\n");
    scanf("%f", &weight);

    heightmeter=height/100;

    bmi = weight / (heightmeter * heightmeter);

    printf("Your Body Mass Index(BMI) is %.1f\n", bmi);


    if(bmi >= 16 && bmi <= 18.5)
    {
        printf(" Underweight\n");
    }
    else if(bmi >= 19 && bmi <= 29)
    {
        printf("normal (healthy weight)\n");
    }
    else if(bmi >= 30 && bmi <= 35)
    {
        printf(" Obese class I\n");
    }
    else if(bmi >= 36 && bmi <= 39)
    {
        printf("Obese class II\n");
    }
    else if(bmi >= 40)
    {
        printf("Obese class III\n");
    }
    else
    {
        printf("Wrong entry\n");
    }

    return 0;
}

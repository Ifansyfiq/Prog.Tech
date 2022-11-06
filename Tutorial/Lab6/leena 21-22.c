#include <stdio.h>

int main()
{
    int n, day, month, year;
    char name[50], student_id[10], room[5],item[n][20];
    float price[n], total;

    printf("\tUMP Electrical Appliance Registration Form");
    printf("\nName :");
    scanf("%s", &name);
    printf("Student ID :");
    scanf("%s", &student_id);
    printf("Room :");
    scanf("%s", &room);
    printf("Day:");
    scanf("%i", &day);
    printf("Month:");
    scanf("%i", &month);
    printf("Year:");
    scanf("%i", &year);
    printf("\nHow many items:");
    scanf("%i", &n);

    if(n <= 3)
    {
        for (int i=1; i<=n; i++)
            {
                printf("Item %i:", i);
                scanf("%s", &item[i]);
                printf ("Price %i:RM", i);
                scanf("%f", &price[i]);
                total = total + price[i];
            }

    printf("\n\tUMP Electrical Appliance Registration Form");
    printf("\n===========================================================");
    printf("\nName :%s", name);
    printf("\nStudent ID :%s", student_id);
    printf("\nRoom :%s", room);
    printf("\n===========================================================");
    printf("\nItem\t\t\tFee(RM)");
    printf("\n------------------------------------------------");

    for (int i=1; i<=n; i++)
        {
            printf ("\n%s\t\t\t%.2f", item[i], price[i]);
        }

    printf("\n------------------------------------------------");
    printf("\nTotal\t\t\t:%.2f", total);
    printf("\n------------------------------------------------");
    printf("\nIssued Date :%i/%i/%i", day, month, year);
    printf("\n===========================================================\n");

    }
    else
    {
        printf("Only 3 electrical appliances are allowed in 1 semester\n");
    }

return 0;
}


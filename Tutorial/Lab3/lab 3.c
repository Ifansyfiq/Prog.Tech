#include <stdio.h>
#include <string.h>
void main()
{
    char name[40],studentId[10],advisor[40],subName1[40],subName2[40],subCode1[10],subCode2[10];
    char temp;
    int credit1,credit2,totalcredit;

    printf("Enter name: ");
    scanf("%[^\n]",name);
    printf("Enter student id: ");
    scanf("%s",&studentId);
    scanf("%c",&temp);//clear buffer
    printf("Academic Advisor name: ");
    scanf("%[^\n]",advisor);
    scanf("%c",&temp);//clear buffer
    printf("Enter first subject name: ");
    scanf("%[^\n]",subName1);
    printf("Enter subject code: ");
    scanf("%s",&subCode1);
    scanf("%c",&temp);//clear buffer
    printf("Enter subject credits: ");
    scanf("%i",&credit1);
    scanf("%c",&temp);//clear buffer
    printf("Enter second subject name: ");
    scanf("%[^\n]",subName2);
    printf("Enter subject code: ");
    scanf("%s",&subCode2);
    scanf("%c",&temp);//clear buffer
    printf("Enter subject credits: ");
    scanf("%i",&credit2);
    scanf("%c",&temp);//clear buffer

    totalcredit=credit1 + credit2;

    printf("\n\nUniverity of Gambang Subjects Registration Form\n");
    printf("=================================================================================\n");
    printf("Name: %s\n",name);
    printf("Student ID: %s\n",studentId);
    printf("Total Subjects: 2\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("Subject name\t\t\t\tSubject Code\t\tCredit\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("%s\t\t\t%s\t\t\t%i\n",subName1,subCode1,credit1);
    printf("%s\t\t\t%s\t\t\t%i\n",subName2,subCode2,credit2);
    printf("---------------------------------------------------------------------------------\n");
    printf("Total Credits:\t\t\t\t\t\t\t%i\n\n",totalcredit);
    printf("Academic Advisor: %s",advisor);

}

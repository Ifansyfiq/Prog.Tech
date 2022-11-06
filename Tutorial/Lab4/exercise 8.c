#include<stdio.h>

void display_age(int x);
void get_age();

int main()
{
    int x;

    printf("\ninput your age:");
    scanf("%d",&x);
    get_age();
    display_age(x);

    return 0;
}

void get_age()
{
    int age;
    printf("\ninput your age:");
    scanf("%d",&age);
}

void display_age(int num)
{

    printf("\nyour age is: %d",num);
}

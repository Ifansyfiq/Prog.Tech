#include<stdio.h>

void display_age(int x);
int get_age();

int main()
{
    int x;

    x=get_age();
    display_age(x);

    return 0;
}

int get_age()
{
    int age;
    printf("\ninput your age:");
    scanf("%d",&age);
    return age;
}

void display_age(int num)
{

    printf("\nyour age is: %d",num);
}

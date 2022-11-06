#include<stdio.h>

void display_age(int x);

int main()
{
    int x;

    printf("\ninput your age:");
    scanf("%d",&x);
    display_age(x);

    return 0;

}

void display_age(int a)
{

    printf("\nyour age is %d",a);
}

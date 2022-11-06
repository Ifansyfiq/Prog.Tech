#include<stdio.h>

int get_sum();

int main()
{
    int total;

    total=get_sum();

    printf("\ntotal sum is: %d",total);

    return 0;
}

int get_sum()
{
    int x,y,sum;

    printf("\ninput first value:");
    scanf("%d",&x);
    printf("\ninput second value:");
    scanf("%d",&y);

    sum=x+y;

    return sum;

}

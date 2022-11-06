#include<stdio.h>

int read_data();
int print_data(int,int,int);
int reversed_data(int,int,int);

int main()
{
    read_data();
    print_data(x,y,z);

    return 0;
}

int read_data()
{
    int x,y,z;

    printf("\ninput first integer:");
    scanf("%d",&x);
    printf("\ninput second integer:");
    scanf("%d",&y);
    printf("\ninput third integer:");
    scanf("%d",&z);

    return x,y,z;
}

int print_data(int a,int b,int c)
{
    int largest,smallest;

    if (a>b)
    {
        a=largest;
        b=smallest;
    }
    else if(b>c)
    {
        c=smallest;
    }

}

#include <stdio.h>
#include <strings.h>
int main()
{
    int a,b;
    int ko;
    char state[20][20]={"Kuantan","Pekan","Rompin","Temerloh","Bentong"};
    char cases[20][20]={"cases","Death cases","Recovery cases"};
    int new[20][20]={};
    int old[20][20]={{98,7,948},{3,0,180},{48,3,137},{18,4,365},{1,12,1668}};
    int newest[20][20]={};
    int sum;
    int mco;
    for(b=0;b<5;b++)
    {
        printf("\n%s",state[b]);
        for(a=0;a<3;a++)
        {
            printf("\nnew %s:",cases[a]);
            scanf("%d",&new[b][a]);
            newest[b][a]=new[b][a]+old[b][a];

        }

    }

    for(b=0;b<5;b++)
    {
        printf("\n%s",state[b]);
        sum=0;
        for(a=0;a<3;a++)
        {
            printf("\nnew %s:",cases[a]);
            printf("\t%d",new[b][a]);
            printf("\ntotal %s:",cases[a]);
            printf("\t%d",newest[b][a]);
            sum=sum+newest[b][0];
        }
        if(sum>40)
        {
           printf("\nIm zone red");
            ko=10000;
        }
        else if(sum>=20)
        {
           printf("\nIm zone orange");
            ko=1000;


        }
        else if(sum>=1)
        {
           printf("\nIm zone yellow");
            ko=100;

        }
        else
        {
           printf("\nIm zone green");
            ko=10;
        }
        mco=mco+ko;
    }
if(mco>=40000)
{
    printf("\nEnhanced Movement Control Order");
    printf("\nyour abretiation is EMCO");
}
else if(mco>=4000)
{
     printf("\nConditional Movement Control Order");
     printf("\nyour abretiation is CMCO");
}
else if(mco>=400)
{
    printf("\nSemi Enhanced Movement Control Order");
    printf("\nyour abretiation is SEMCO");
}
else
{
    printf("\nRecovery Movement Control Order");
    printf("\nyour abretiation is RMCO");
}





    return 0;
}

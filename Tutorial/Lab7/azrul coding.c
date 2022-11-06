#include <stdio.h>

//Function Declaration
int number1();
int number2();
int number3();
int member1(int,int,int,int,int);
int member2(int,int,int,int,int);
int member3(int,int,int,int,int);
int team();
int trail[5];
int trails[5];
int trailer[5];
void printout(char *w,char *x,char *y,char *z);


int main()
{
    char group[20],name1[20],name2[20],name3[20];
    printf("Group\n");
    gets(group);
    printf("Name\n");
    gets(name1);
    number1();
    fflush(stdin);
    printf("Name\n");
    gets(name2);
    number2();
    fflush(stdin);
    printf("Name\n");
    gets(name3);
    number3();
    fflush(stdin);
    printout(group,name1,name2,name3);
    fflush(stdin);
    return 0;
}
int number1()
{
    int i,l;
    for(i=1;i<6;i++)
    {
        printf("Trail %d = ",i);
        scanf("%d",&trail[i]);

    }
    l=member1(trail[0],trail[1],trail[2],trail[3],trail[4]);
    return l;
}
int number2()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        printf("Trail %d = ",i);
        scanf("%d",&trails[i]);

    }
    j=member2(trails[0],trails[1],trails[2],trails[3],trails[4]);
    return j;
}
int number3()
{
    int i,k;
    for(i=1;i<6;i++)
    {
        printf("Trail %d = ",i);
        scanf("%d",&trailer[i]);
    }
    k=member3(trailer[0],trailer[1],trailer[2],trailer[3],trailer[4]);
    return k;
}

int member1(int a,int b,int c,int d,int e)
{
    int total;
    total=a+b+c+d+e;
    return total;

}
int member2(int a,int b,int c,int d,int e)
{
    int total;
    total=a+b+c+d+e;
    return total;

}
int member3(int a,int b,int c,int d,int e)
{
    int total;
    total=a+b+c+d+e;
    return total;

}
int team()
{
    int x,y,z,u=0;
    x=number1();
    y=number2();
    z=number3();
    u=u+x+y+z+u;
    return u;
}
void printout(char *w,char *x,char *y,char *z)
{
    int j,k,l,r;
    k=number1();
    j=number2();
    l=number3();
    r=team();
   printf("****************\n");
   printf("Group Name = %s\n",w);
   printf("1) Name = %s\n",x);
   printf("Trail (1) - %d\n",trail[0]);
   printf("Trail (2) - %d\n",trail[1]);
   printf("Trail (3) - %d\n",trail[2]);
   printf("Trail (4) - %d\n",trail[3]);
   printf("Trail (5) - %d\n",trail[4]);
   printf("Score : %d\n",k);
   printf("==================\n");
   printf("\n2) Name = %s\n",y);
   printf("Trail (1) - &d\n",trails[0]);
   printf("Trail (2) - %d\n",trails[1]);
   printf("Trail (3) - %d\n",trails[2]);
   printf("Trail (4) - %d\n",trails[2]);
   printf("Trail (5) - %d\n",trails[3]);
   printf("Score : %d\n",j);
   printf("==================\n");
   printf("\n2) Name = %s\n",z);
   printf("Trail (1) - &d\n",trailer[0]);
   printf("Trail (2) - %d\n",trailer[1]);
   printf("Trail (3) - %d\n",trailer[2]);
   printf("Trail (4) - %d\n",trailer[2]);
   printf("Trail (5) - %d\n",trailer[3]);
   printf("Score : %d\n",l);
   printf("==================\n");
   printf("\nTotal score of team %s = %d",w,r);
   printf("\n*********************");
}

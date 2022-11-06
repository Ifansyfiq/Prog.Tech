#include <stdio.h>

int main()
{

int n,i=1,r=1;

printf("\ninput N:");
scanf("%d",&n);

for (i=1;i<2;i++)
{

    printf("\nnatural number from %d-1 in reverse :",n);

    for (r=n;r>0;r--)
    {

      printf("%d,",r);
    }

}
//(r=1;r<=n;r++)
    return 0;
}


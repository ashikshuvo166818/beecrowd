#include<stdio.h>
int main()
{
    double ara[10];
    int i,j,k;
    for(i=0;i<10;i++)
    {
        scanf("%lf",&ara[i]);
    }
    for(i=0;i<10;i++)
    {
        if(ara[i]<=10)
        {
            printf("A[%d] = %.1lf\n",i,ara[i]);
        }
    }
    return 0;
}
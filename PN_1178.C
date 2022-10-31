#include<stdio.h>
int main()
{
    double n,m;
    int i,j;
    scanf("%lf",&n);
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %lf\n",i,n);
         n=n/2.0;
    }
    return 0;
}
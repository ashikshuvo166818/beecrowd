#include<stdio.h>
int main()
{
    int n,i,j=1,k=1;
    scanf("%d",&n);
    k=k*n;
    int arra[10];
    for(i=1;i<=10;i++)
    {
        printf("N[%d] = %d\n",i-1,k);
        k=k+k;
    }
    return 0;
}

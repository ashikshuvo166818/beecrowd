#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,c;
    long long int j,k;
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%lld",&j);
        for(k=1;k<=j;k++)
        {
            if(j%k==0)
            {
                    c=c+1;
            }
        }
        if(c==2)
        {
            printf("Prime\n",j);
        }
        else
        {
            printf("Not Prime\n",j);
        }
    }
    return 0;
}
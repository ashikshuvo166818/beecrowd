#include<stdio.h>
int main()
{
    int i,n,x,y,sum1,sum2,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        if(x>y)
        {
            sum1=0;
            for(j=y+1;j<x;j++)
            {
                if(j%2!=0)
                {
                    sum1=sum1+j;
                }
            }
            printf("%d\n",sum1);
        }
        else
        {
            sum2=0;
            for(k=x+1;k<y;k++)
            {
                if(k%2!=0)
                {
                    sum2=sum2+k;
                }
            }
            printf("%d\n",sum2);
        }
    }
    return 0;
}
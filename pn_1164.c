#include<stdio.h>
int main()
{
    int n,i,j,k,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {sum=0;
        scanf("%d",&j);
        for(k=1;k<j;k++)
        {
            if(j%k==0)
            {
                sum=sum+k;
            }
        }
        if(sum==j)
        {
            printf("%d eh perfeito\n",j);
        }
        else
        {
             printf("%d nao eh perfeito\n",j);
        }
        }
        return 0;
    }
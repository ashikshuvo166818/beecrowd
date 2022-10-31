#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    long m;
    for(i=0;i<n;i++)
    {
        k=0;
        scanf("%ld",&m);
        if(m==0 || m==1)
        {
            printf("Not Prime\n");
            continue;
        }
        if(m==2)
        {
            printf("Prime\n");
            continue;
        }
        for(j=2;j<sqrt(m)+1;j++)
        {
            if(m%j==0)
            {
                k++;
            }
            if(k==2)
            {
                break;
            }
        }
        if(k>=1)
        {
            printf("Not Prime\n");
        }
        else
        {
            printf("Prime\n");
        }
    }
    return 0;
}
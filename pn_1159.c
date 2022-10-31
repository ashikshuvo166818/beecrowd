#include<stdio.h>
int main()
{
    int n,i=0,j=0,k,l;
    for(i=0;i>=0;i++)
    {
        scanf("%d",&n);
        l=0;
        j=0;
        if(n==0)
        {
            break;
        }
        for(k=n;k>=n;k++)
        {
            if(k%2==0)
            {
                l=l+k;
                j++;
            }
            if(j==5)
            {
                break;
            }
        }
        printf("%d\n",l);
    }
    return 0;
}
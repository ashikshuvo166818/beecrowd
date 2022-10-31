#include<stdio.h>
int main()
{
    int m, n, i, sum, p, j;
    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0)
        {
            break;
        }
        if(m>n)
        {
            p=m;
            m=n;
            n=p;
        }
        sum=0;
        i=m;
        while(i<=n)
        {
            printf("%d\t",i);
            sum=sum+i;
            i++;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
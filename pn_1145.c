#include<stdio.h>
int main()
{
   long long  int x,y,temp,z;
   int i;
    scanf("%lld %lld",&x,&y);
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    z=0;
    for(i=1;i<=y;i++)
    {
        printf("%d ",i);
        z++;
        if(z==x)
        {
            printf("\n");
            z=0;
        }
    }
    printf("\n");
    return 0;
}
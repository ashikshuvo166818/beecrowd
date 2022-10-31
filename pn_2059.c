#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=b+c;
    if(a==1 && sum%2==0)
    {
        f=1;
    }
    else
    {
        f=2;
    }
    if((d==1 && e==0) || (d==0 && e==1))
    {
        f=1;
    }
    else if(d==1 && e==1)
    {
        f=2;
    }
    printf("Jogador %d ganha!\n",f);
    return 0;
}
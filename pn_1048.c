#include<stdio.h>
int main()
{
    float n,a,b,c,e,x;
    int d;
    scanf("%f",&n);
    if(n>=0 && n<=400.00)
    {
        x=0.15;
        d=15;
    }
    else if(n>=400.01 && n<=800.00)
    {
        x=0.12;
        d=12;
    }
     if(n>=800.01 && n<=1200.00)
    {
        x=0.10;
        d=10;
    }
     if(n>=1200.01 && n<=2000.00)
    {
        x=0.07;
        d=7;
    }
     if(n>  2000.00)
    {
        x=0.04;
        d=4;
    }
    b=n+n*x;
    c=n*x;
    printf("Novo salario: %.1f\n",b);
    printf("Reajuste ganho: %.1f\n",c);
    printf("Em percentual: %d %%\n",d);
    return 0;
}
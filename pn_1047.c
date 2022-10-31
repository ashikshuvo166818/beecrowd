#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<0 || b<0 ||c<0 || d<0 ||a>23 ||c>23 || b>59 || d>59)
    {
        return 0;
    }
    else
    {
         f=d-b;
    if(f==0)
    {
        e=c-a;
        if(e==0)
        {
           e=24;
           f=0;
        }
        else
        {
            f=f;
            e=e;
        }
    }
    else if(f>0)
    {
        e=c-a;
        f=d-b;
    }
    else if(f<0)
    {
        e=c-a-1;
        f=60+f;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    return 0;

}
#include<stdio.h>
int main()
{
    int x,y,sub;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y)
    {
        sub=24-x+y;
    }
    else if(y>x)
    {
        sub=y-x;
    }
    else if(x==y)
    {
        sub=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",sub);
    return 0;
}
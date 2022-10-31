#include<stdio.h>
int main()
{
    int c,d,i;
    while(1)
    {
    scanf("%d %d",&c,&d);
    if(c==d)
    {
        break;
    }
    else if(d>c)
    {
        printf("Crescente\n");
    }
    else if(c>d)
    {
        printf("Decrescente\n");
    }
    }
    return 0;
}
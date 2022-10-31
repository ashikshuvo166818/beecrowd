#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i,j,k,sum=0;
    for(i=0;num!=0;i++)
    {
        j=num%10;
        num=num/10;
    }
    printf("%d",i);
}
#include<stdio.h>
int main()
{
    int n,i,num;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
        i++;
    }
    return 0;
}
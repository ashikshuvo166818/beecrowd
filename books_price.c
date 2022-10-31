#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,max=0,min=0,arra[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    max=arra[0],min=arra[0];
    for(i=0;i<n;i++)
    {
        if(max<arra[i])
        {
            max=arra[i];
        }
        if(min>arra[i])
        {
            min=arra[i];
        }
    }
    printf("Cheapest book price is %d\nMost costly book price is %d\n",min,max);
}
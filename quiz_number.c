#include<stdio.h>
int main()
{
    int arra[10]={8,7,10,7,5,7,3,6,7,3},i,j,sum=0,k=0;
    float ave;
    for(i=0;i<10;i++)
    {
        sum=sum+arra[i];
    }
    ave=sum/10.0;
    printf("%f\n",ave);
    for(j=0;j<10;j++)
    {
        if(ave<=arra[j])
        {
            k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
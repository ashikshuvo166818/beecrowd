#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a,b,c;
    for(i=0;i<n;i++)
    {
    scanf("%f %f",&a,&b);
    c=a/b;
    if(a==0 && b==0)
    {
        printf("0.0\n");
    }
    else if(b==0)
    {
        printf("divisao impossivel\n");
    }
    else if(a==0)
    {
        printf("0.0\n");
    }
    else
    {
        printf("%.1f\n",c);
    }
    }
    return 0;
}
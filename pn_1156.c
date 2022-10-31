#include<stdio.h>
int main()
{
    int i;
    float s=1.0,j=2.0;
    for(i=3;i<=39;i=i+2)
    {
        s=s+i/j;
        j=j*2;
    }
    printf("%.2f\n",s);
    return 0;
}
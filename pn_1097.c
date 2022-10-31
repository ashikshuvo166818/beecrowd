#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    for(i=1;i<=9;i=i+2)
    {
         j=i+6;
        printf("I=%d J=%d\n",i,j);
         printf("I=%d J=%d\n",i,j-1);
          printf("I=%d J=%d\n",i,j-2);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    if(n%400==0 || (n%4==0 && n%100!=0))
    {
        printf("This is leap year.\n");
          if(n%15==0)
    {
          printf("This is huluculu festival year.\n");
    }
    }
    else if(n%15==0)
    {
          printf("This is huluculu festival year.\n");
    }
    else if((n%400==0 || (n%4==0 && n%100!=0)) && n%55==0 )
    {
        printf("This is leap year.\nThis is Bulukulu festival year.\n");
    }
    else
    {
        printf("This is an ordinary year.\n");
    }
    return 0;
}
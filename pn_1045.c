#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>=(b+c) || b>=(a+c) || c>=(a+b))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
   else if(a*a==(b*b+c*c) ||b*b==(a*a+c*c) || c*c==(a*a + b*b))
    {
        printf("TRIANGULO RETANGULO\n");
    }
   else if(a*a>(b*b+c*c) || b*b>(a*a+c*c) || c*c>(a*a+b*b))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
   else if(a*a<(b*b+c*c) || b*b<(a*a+c*c) || c*c<(b*b+a*a))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b && a!=c) || (b==c && b!=a) || (c==a && c!=b))
    {
        printf("TRIANGULO ISOSCELES\n");
    } 
    return 0;
}
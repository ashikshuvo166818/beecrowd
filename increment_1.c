#include<stdio.h>
int main()
{
  int i,a=3,b=7,m=10,n=6;
  i=m++ + ++b + a-- + n++ + b-- + ++m + n + a++ + n-- + ++b ;
  printf("%d\n",i);

}
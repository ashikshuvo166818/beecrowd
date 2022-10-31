#include<stdio.h>
int main()
{
  float i,j;
  i=0.0,j=1.0;
  for(i=0.0;i<=2.2;i=i+0.2)
  {
    if((i>0 && i<1) || (i>1 && i<2))
    {
      printf("I=%.1f J=%.1f\n",i,j+i);
      printf("I=%.1f J=%.1f\n",i,j+i+1);
      printf("I=%.1f J=%.1f\n",i,j+i+2);
    }
    else
    {
      printf("I=%.0f J=%.0f\n",i,i+j);
      printf("I=%.0f J=%.0f\n",i,i+j+1);
      printf("I=%.0f J=%.0f\n",i,i+j+2);
    }
  }
    return 0;
}
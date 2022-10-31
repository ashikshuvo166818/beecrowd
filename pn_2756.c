#include<stdio.h>
int main()
{

int i,j,k,l;

  for(i=1;i<=9;i++)
  {
    for(j=9-1-i;j>0;j--)
    {
        printf(" ");
    }
    if(i==1)
    {
    printf("A\n");
    }
   else if(i==2) 
   {
   printf("B B\n");
   }
    else if(i==3) 
   {
   printf("C   C\n");
   }
   else if(i==4) 
   {
   printf("D     D\n");
   }
   else if(i==5) 
   {
   printf("E       E");
   }
  }
  printf("\n");
 for(k=4;k<=7;k++)
  {
    for(l=1;l<=k;l++)
    {
        printf(" ");
    }
    if(k==4)
    {
        printf("D     D\n");
     
    }
     else if(k==5)
    {
        printf("C   C\n");
      
    }
    else if(k==6)
    {
        printf("B B\n");
   
    }
    else if(k==7)
    {
        printf("A");

    }
  }
    return 0;
  }
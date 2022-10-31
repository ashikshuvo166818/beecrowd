#include<stdio.h>
int main()
{
    int n=2002,num,i,j;
    for(i=0;i>=0;i++)
    {
        scanf("%d",&num);
        if(n!=num)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
            return 0;
        }
    }
    return 0;
}
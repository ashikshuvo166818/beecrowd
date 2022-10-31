#include <stdio.h>
int main()
{
    int i, j = 0, k, l = 0, m = 0,n=0, arra[15];
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &arra[i]);
    }

    for (i = 0; i < 15; i++)
    {
        if (n <5)
        {
            j++;
            if (arra[i] % 2 == 0)
            {
                printf("par[%d] = %d\n", n, arra[i]);
                n++;
            }
        }
    }
    for (i = 0; i < 15; i++)
    {
        if (arra[i] % 2 != 0)
        {
            printf("impar[%d] = %d\n", l, arra[i]);
            l++;
            if (l >= 5)
            {
                l = 0;
            }
        }
    }
    for (i = j; i < 15; i++)
    {
        if (arra[i] % 2 == 0)
        {
            printf("par[%d] = %d\n", m, arra[i]);
            m++;
        }
    }

    return 0;
}
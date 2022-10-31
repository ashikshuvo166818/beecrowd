#include <stdio.h>
int main()
{
    int number, k;
    scanf("%d", &number);
    for (k = 0; k < number; k++)
    {
        int n, m, i, j = 0, sum = 0;
        scanf("%d %d", &n, &m);
        for (i = n; i > 0; i++)
        {
            if (i % 2 != 0)
            {
                j++;
                sum = sum + i;
            }
            if (j == m)
            {
                break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int x, y = -5, sum = 0, z, i;
    scanf("%d", &x);
    while (y <= 0)
        scanf("%d", &y);
    z = x + y;
    for (i = x; i < z; i++)
        sum = sum + i;
    printf("%d", sum);
    return 0;
}
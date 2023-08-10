#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    m = sqrt(m)>(int)sqrt(m) ? (int)sqrt(m)+1 : sqrt(m);
    n = sqrt(n);
    printf("%d\n",n-m+1);
    for (int i = m; i <= n; i++)
        printf("%d\n", i*i);
}
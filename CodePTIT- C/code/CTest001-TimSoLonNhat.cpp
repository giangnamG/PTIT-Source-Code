#include <stdio.h>
#include <limits.h>

int main()
{
    long long max = LONG_MIN;
    long long n;
    while (scanf("%lld", &n) != EOF)
    {
        max = max > n ? max : n;
    }
    printf("%lld",max);
}
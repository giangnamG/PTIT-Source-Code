#include <stdio.h>

long long bcln(int a, long long b)
{
    long long x = a, y = b;
    while (y)
    {
        long long tmp = x % y;
        x = y;
        y = tmp;
    }
    return a*b / x;
}
void process()
{
    int n; scanf("%d", &n);
    long long b = 1;
    for (int i = 1; i <= n; i++)
        b = bcln(i, b);
    printf("%lld\n", b);
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
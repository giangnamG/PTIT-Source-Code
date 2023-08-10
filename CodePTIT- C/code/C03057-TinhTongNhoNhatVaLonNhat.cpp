#include <stdio.h>

long long to_5(long long n)
{
    long long i = 1, res = 0;
    while (n)
    {
        int x = n%10 == 6 ? 5 : n%10;
        res = x*i + res;
        i *= 10;
        n /= 10;
    }
    return res;
}
long long to_6(long long n)
{
    long long i = 1, res = 0;
    while (n)
    {
        int x = n%10 == 5 ? 6 : n%10;
        res = x*i + res;
        i *= 10;
        n /= 10;
    }
    return res;
}
void process()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    long long min = to_5(a) + to_5(b);
    long long max = to_6(a) + to_6(b);
    printf("%lld %lld\n", min, max);
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
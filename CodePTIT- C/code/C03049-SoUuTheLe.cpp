#include <stdio.h>
#include <math.h>

int check (long long n)
{
    if (n%2==0)
        return 0;
    int odd = 0, even = 0;
    while(n)
    {
        n%10%2 == 0 ? even ++ : odd ++;
        n/=10;
    }
    return even < odd;
}
void process()
{
    long long n; scanf("%lld", &n);
    check(n) ? printf("YES\n") : printf("NO\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
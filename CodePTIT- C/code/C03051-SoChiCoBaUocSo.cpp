#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    if (n<2) return 0;
    for (int i = 2; i<=sqrt(n); i++)
        if (n%i==0)
            return 0;
    return 1;
}
void process()
{
    long long l, r; scanf("%lld%lld", &l, &r);
    l = sqrt(l);
    r = sqrt(r);
    if (l==1) l++;
    int dem = 0;
    for (long long i = l; i <= r; i++)
        if (IsPrime(i))
            dem ++;
    printf("%ld\n", dem);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
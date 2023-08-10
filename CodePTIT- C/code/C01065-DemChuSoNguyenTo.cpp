#include <stdio.h>

long long reverse(long long n)
{
    long long num = 0;
    while (n)
    {
        num = num * 10 + n%10;
        n/=10;
    }
    return num;
}
int main()
{
    long long n; scanf("%lld", &n);
    int a[10]={0};
    long long x = n;
    while (x)
    {
        int res = x%10;
        if (res == 2 || res == 3 || res == 5 || res == 7)
            a[res]++;
        x/=10;
    }
    x = reverse(n);
    while (x)
    {
        int res = x%10;
        if (a[res]){
            printf("%d %d\n", res,a[res]);
            a[res]=0;
        }
        x/=10;
    }
}
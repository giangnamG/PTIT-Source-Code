#include <stdio.h>

void process()
{
    int n;
    scanf("%d", &n);
    long long f0 = 0, f1 = 1, f2;
    for (int i = 0; i <= n-2; i++)
    {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    printf("%lld\n", f2);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
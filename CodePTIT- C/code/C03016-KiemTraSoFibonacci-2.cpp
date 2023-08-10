#include <stdio.h>
#include <math.h>

void process()
{
    long long n; scanf("%lld", &n);
    if (n == 0 || n == 1)
    {
        printf("YES\n");
        return;
    }
    long long f0 = 0;
    long long f1 = 1;
    long long f2;
    int check = 0;
    while (1)
    {
        f2 = f0 + f1;
        if (f2 == n)
            check = 1;
        else if (f2 > n)
            break;
        f0 = f1;
        f1 = f2;
    }
    check ? printf("YES\n") : printf("NO\n");
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
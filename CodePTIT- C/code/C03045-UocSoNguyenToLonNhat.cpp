#include <stdio.h>
#include <math.h>

void process()
{
    long long n; scanf("%lld", &n);
    long long max;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
        {
            max = i;
            while (n%i==0)
                n /= i;
        }
    if (n > 1)
        max = n;
    printf("%lld\n", max);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
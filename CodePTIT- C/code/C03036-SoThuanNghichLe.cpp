#include <stdio.h>
#include <math.h>

int is_TN_odd(long long n)
{
    int sum = 0;
    long long  tmp = n, num = 0;
    while(tmp)
    {
        if (tmp%10%2==0)
            return 0;
        num = num * 10 + tmp%10;
        sum += tmp%10;
        tmp /= 10;
    }
    return num != n || sum % 2 == 0 ? 0 : 1;
} 
void process()
{
    long long n; scanf("%lld", &n);
    is_TN_odd(n) ? printf("YES\n") : printf("NO\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
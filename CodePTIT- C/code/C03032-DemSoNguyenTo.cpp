#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int check(int n)
{
    while(n>0)
    {
        if (!IsPrime(n%10))
            return 0;
        n/=10;
    }
    return 1;
}
void process()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int x = a;
        a = b;
        b = x;
    }
    int dem = 0;
    for (int i = a; i<= b; i++)
        dem += IsPrime(i) && check(i) ? 1 : 0;
    printf("%d\n", dem);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
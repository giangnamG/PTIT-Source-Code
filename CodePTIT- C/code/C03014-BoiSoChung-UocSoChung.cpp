#include <stdio.h>

int ucln(int a, int b)
{
    while(b > 0)
    {
        int x = a%b;
        a = b;
        b = x;
    }
    return a;
}
void process()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int uoc = ucln(a, b);
    long long boi = (long long)a*b/uoc;
    printf("%lld %d\n", boi, uoc);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
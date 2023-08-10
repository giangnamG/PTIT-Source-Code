#include <stdio.h>

int ucln(int a, int b)
{
    while(b>0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}
void process()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    ucln(a, b) == ucln(c, d) ? printf("YES\n") : printf("NO\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
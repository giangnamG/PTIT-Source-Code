#include <stdio.h>
#include <math.h>

int check(int n)
{
    int d = n%10;
    n /= 10;
    while(n)
    {
        if (n%10 <= d)
            return 0;
        d = n%10;
        n /= 10;
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
        if (check(i))
            dem ++;
    printf("%d\n", dem);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
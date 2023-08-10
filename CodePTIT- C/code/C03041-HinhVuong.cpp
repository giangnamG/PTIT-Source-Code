#include <stdio.h>
#include <math.h>

void process()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int A = c - a;
    int B = d - b;
    A == B ? printf("YES\n") : printf("NO\n");
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();
    
}
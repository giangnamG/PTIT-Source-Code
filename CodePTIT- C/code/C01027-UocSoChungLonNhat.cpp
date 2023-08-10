#include <stdio.h>

void process()
{
    int a, b;
    scanf("%d%d", &a, &b);
    while(b)
    {
        int tmp = a%b;
        a = b;
        b = tmp;
    }
    printf("%d\n", a);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
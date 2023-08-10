#include <stdio.h>

int IsFibonacci(int n)
{
    int f0 = 0;
    int f1 = 1;
    int f2 = f0 + f1;
    for (int i = 0; i < 1000; i++)
    {
        if (f2 == n)
            return 1;
        f0 = f1;
        f1 = f2;
        f2 = f0 + f1;
    }
    return 0;
}

int main()
{
    int n; scanf("%d", &n);
    IsFibonacci(n) ? printf("1") : printf("0");
}
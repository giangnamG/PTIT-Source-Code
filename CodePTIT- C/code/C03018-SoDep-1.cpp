#include <stdio.h>
#include <math.h>

int IsFibonacci(int n)
{
    if (n<2)
        return 0;
    int f0 = 1;
    int f1 = 1;
    int f2 = 0;
    while(f2 < n)
    {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    return f2 == n ? 1 : 0;
}
int GetSum(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int x = a;
        a = b;
        b = x;
    }
    int x[1001]={0};
    for (int i = 2; i <= 1000; i++)
        if(!x[i])
            for (int j = i*i; j<= 1000; j+=i)
                x[j] = 1;
    for (int i = a; i<=b; i++)
        if (!x[i] && IsFibonacci(GetSum(i)))
            printf("%d ",i);
}
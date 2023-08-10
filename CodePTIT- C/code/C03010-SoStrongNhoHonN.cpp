#include <stdio.h>

int gt(int n)
{
    if (n < 2)
        return 1;
    return n*gt(n-1);
}
int strong(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += gt(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    int n; scanf("%d", &n);
    for (int i=1; i < n; i++)
        if (i == strong(i))
            printf("%d ",i);
}
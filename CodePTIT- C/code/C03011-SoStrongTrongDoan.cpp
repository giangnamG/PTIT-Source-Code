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
    int a, b; scanf("%d%d", &a, &b);
    if (a > b){
        int x = a;
        a = b;
        b = x;
    }
    for (int i=a; i <= b; i++)
        if (i == strong(i))
            printf("%d ",i);
}
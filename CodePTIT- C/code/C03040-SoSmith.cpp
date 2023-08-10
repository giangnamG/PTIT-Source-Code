#include <stdio.h>
#include <math.h>

int GetSum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int GetSumPrime(int n)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
        while (n%i==0)
        {
            sum += GetSum(i);
            n /= i;
        }
    if (n > 1)
        sum += GetSum(n);
    return sum;
}
int main()
{
    int n; scanf("%d", &n);
    GetSum(n) == GetSumPrime(n) ? printf("YES\n") : printf("NO\n");
}
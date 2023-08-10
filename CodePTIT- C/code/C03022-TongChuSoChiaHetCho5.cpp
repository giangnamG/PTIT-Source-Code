#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    if(n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int Chia5(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n%10;
        n/=10;
    }
    return sum%5 == 0;
}
int main()
{
    int n; scanf("%d",&n);
    int dem = 0;
    for (int i = 2; i <= n; i++)
        if (Chia5(i))
            if (IsPrime(i)){
                printf("%d ",i);
                dem ++;
            }
    printf("\n%d",dem);
}
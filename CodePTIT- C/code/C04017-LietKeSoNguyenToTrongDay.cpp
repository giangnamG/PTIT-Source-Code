#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n; scanf("%d", &n);
    int a[100], check[1000]={0};
    int dem = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (IsPrime(a[i]))
        {
            check[a[i]] ++;
            dem ++;
        }
    }
    printf("%d ", dem);
    for (int i = 0; i < n; i++)
        if (check[a[i]]>0)
        {
            printf("%d ", a[i]);
            // check[a[i]] = 0;
        }
}
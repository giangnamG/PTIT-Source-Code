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
void process()
{
    int n; scanf("%d", &n);
    int a[100], check[100000]={0};
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (IsPrime(a[i]))
            check[a[i]] ++;
        else
            check[a[i]] = 0;
    }
    for (int i = 2; i < 100000; i++)
        if (check[i])
            printf("%d xuat hien %d lan\n", i, check[i]);

}
int main()
{
    int t; scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("Test %d:\n", i);
        process();
    }
}
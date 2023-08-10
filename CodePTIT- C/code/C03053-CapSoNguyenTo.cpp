#include <stdio.h>
#include <math.h>

int a[10000]={0};
void SangNT()
{
    for (int i = 2; i < 10000; i++)
        if (!a[i])
            for (int j = i*i; j < 10000; j+=i)
                a[j] = 1;
}
void process()
{
    int n; scanf("%d", &n);
    for (int i = 2; i <= n/2; i++)
        if (!a[i]&&!a[n-i])
            printf("%d %d ",i, n-i);
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    SangNT();
    while(t--)
        process();
}
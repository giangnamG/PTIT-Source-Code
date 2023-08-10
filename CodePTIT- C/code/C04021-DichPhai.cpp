#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int shift; scanf("%d", &shift);
    for (int i = 0; i < shift; i++)
    {
        int x = a[n-1];
        for (int j = n-1; j >= 0; j--)
            a[j] = a[j-1];
        a[0] = x;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
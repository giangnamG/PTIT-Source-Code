#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (a[i] < a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
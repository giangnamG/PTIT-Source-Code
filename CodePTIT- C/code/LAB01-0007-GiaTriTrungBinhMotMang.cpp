#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        b += a[i];
    }
    printf("%0.3f", (float)b / n);
}
#include <stdio.h>

void process()
{
    int n; scanf("%d", &n);
    int a[100];
    int max = -9999;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        max = max > a[i] ? max : a[i];
    }
    printf("%d\n", max);
    for (int i = 0; i < n; i++)
        if (a[i] == max)
            printf("%d ", i);
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
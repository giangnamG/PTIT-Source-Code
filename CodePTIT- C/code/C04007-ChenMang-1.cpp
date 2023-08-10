#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[100], b[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int index; scanf("%d", &index);
    for (int i = n+m-1; i >= index; i--)
        a[i] = a[i-m];
    int k = 0;
    for (int i = index; i < index + m; i++)
        a[i] = b[k++];
    for (int i = 0; i < n+m; i++)
        printf("%d ", a[i]);
}
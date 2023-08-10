#include <stdio.h>

void process()
{
    int n, m, index; 
    scanf("%d%d%d", &n, &m, &index);
    int a[100], b[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (int i = n+m-1; i >= index; i--)
        a[i] = a[i-m];
    int k = 0;
    for (int i = index; i < index + m; i++)
        a[i] = b[k++];
    for (int i = 0; i < n+m; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("Test %d:\n\n", i);
        process();
    }
        
}
#include <stdio.h>

void process()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
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
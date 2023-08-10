#include <stdio.h>

void process()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if(a[i][k-1]>a[j][k-1])
            {
                int x = a[i][k-1];
                a[i][k-1] = a[j][k-1];
                a[j][k-1] = x;
            }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
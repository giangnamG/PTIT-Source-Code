#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x = j-i;
            a[i][j] = x < 0 ? 0 : x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
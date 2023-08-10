#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[100][100], x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = j < i ? 0 : x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if(j<=i)
                printf("%d ", a[j][i]);
        printf("\n");
    }
}
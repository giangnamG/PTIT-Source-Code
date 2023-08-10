#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("%d", x++);
        }
        printf("\n");
    }
}
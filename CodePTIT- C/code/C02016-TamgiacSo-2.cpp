#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x = i%2 == 0 ? 2 : 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",x);
            x+=2;
        }
        printf("\n");
    }
}
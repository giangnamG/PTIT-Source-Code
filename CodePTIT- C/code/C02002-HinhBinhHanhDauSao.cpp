#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n-i-1; j++)
            j < n-i-1 ? printf("~") : printf("*");       
        printf("\n");
    }
}
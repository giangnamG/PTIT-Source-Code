#include <stdio.h>


int main()
{
    int n; scanf("%d", &n);
    int f0 = 0;
    int f1 = 1;
    printf("0 1 ");
    int f2 = 0;
    for (int i = 1; i <= n-2; i++)
    {
        f2 = f0 + f1;
        printf("%d ",f2);
        f0 = f1;
        f1 = f2;
    }
}
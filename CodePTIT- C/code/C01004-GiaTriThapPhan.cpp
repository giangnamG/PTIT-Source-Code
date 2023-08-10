#include <stdio.h>

int main()
{
    int t; scanf("%d", &t);
    int n;
    while (t--)
    {
        scanf("%d", &n);
        printf("%.15lf\n", 1.0 / n);
    }
    
}
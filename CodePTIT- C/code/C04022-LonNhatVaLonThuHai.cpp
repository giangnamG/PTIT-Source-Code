#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int x, max1 = -9999, max2 = -9999;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (max1 < x){
            max2 = max1;
            max1 = x;
        }else if (max2 < x && max1 > x)
            max2 = x;
    }
    printf("%d %d\n", max1, max2);
}
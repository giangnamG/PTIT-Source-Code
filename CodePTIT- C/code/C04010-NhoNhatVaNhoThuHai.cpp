#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int x, min1 = 9999, min2 = 9999;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (min1 > x){
            min2 = min1;
            min1 = x;
        }else if (min2 > x && min1 < x)
            min2 = x;    
    }
    printf("%d %d\n", min1, min2);

}
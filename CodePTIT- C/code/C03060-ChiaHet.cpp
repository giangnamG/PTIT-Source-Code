#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int dem = 0;
    for (int i = 1;i <= n; i++)
    {
        if (i %2 == 0)
        {
            int x = i;
            while (x%2 == 0)
            {
                dem ++;
                x/=2;
            }
        }
    }
    if (dem >= k)
        printf("Yes\n");
    else 
        printf("No\n");
}
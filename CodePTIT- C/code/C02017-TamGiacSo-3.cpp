#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        for (int j = 1; j <= 2*i-1; j++)
        {
            if (j <= (2*i-1)/2)
            {
                printf("%d",x);
                x += 2;
            }else{
                printf("%d",x);
                x -= 2;
            }
        }
        printf("\n");
    }
}
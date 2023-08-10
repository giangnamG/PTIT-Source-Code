#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            for (int j = 0; j <= i; j++)
                printf("%d ",++x);
        }else{
            x = x+i+1;
            int tmp = x;
            for (int j = 0; j <= i; j++)
                printf("%d ",tmp--);
        }
        printf("\n");
    }
}
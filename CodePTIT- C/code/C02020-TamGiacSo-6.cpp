#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
            printf("~");
        int x = 2;
        for (int j = 0; j <= 2*i; j++)
        {
            if (j<i)
            {
                printf("%d", x);
                x+=2;
            }else{
                printf("%d", x);
                x-=2;
            }
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j <= col; j++)
        {
            printf("%d", j);
        }
        
        if (i <= col)
        {
            for (int j = i-1; j > 0; j--)
                printf("%d", j);
        }else{
            printf("%d", i);
            for (int j = col -1 ; j > 0; j--)
                printf("%d", j);
        }
        printf("\n");
    }
}
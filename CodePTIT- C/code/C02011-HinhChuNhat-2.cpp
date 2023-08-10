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
            int tmp = col - 1;
            for (int j = i; j > 1; j--)
                printf("%d", tmp--);
        }else{
            int tmp = i;
            for (int j = 1 ; j <= col; j++)
                printf("%d", tmp --);
        }
        printf("\n");
    }
}
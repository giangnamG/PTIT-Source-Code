#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int tmp = col;
    for (int i = row; i >= 1; i--)
    {
        if (row <= col)
        {
            if (i == row)
                for (int j = col; j >= 1; j--)
                    printf("%d", j);
            else{

                for (int j = --tmp; j > 1; j--)
                    printf("%d",j);
                int cnt = 1; 
                for (int j = tmp; j <= col; j++)
                    printf("%d",cnt++);
            }
        }else{
            if (i == row)
                for (int j = i; j > 2; j--)
                    printf("%d",j);
            else
                for (int j = i; j > 1; j--)
                    printf("%d",j);
            for (int j = 1; j <= col - i + 1; j++)
                printf("%d",j);
        }
        printf("\n");
    }
}
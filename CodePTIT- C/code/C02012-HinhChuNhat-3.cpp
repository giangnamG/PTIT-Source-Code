#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        if (i <= col)
            if(i==1)
                for (int j = 1; j <= col; j++)
                    printf("%d",j);
            else{
                for (int j = i; j > 1; j--)
                    printf("%d",j);
                for (int j = 1; j <= col - i + 1; j++)
                    printf("%d",j);
            }
        else{
            int tmp = i;
            for (int j = 1; j <= col; j++)
                printf("%d",tmp --);
        }
        printf("\n");
    }
}
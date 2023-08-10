#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    char c = 'A';
    for (int i = 0; i < row; i++)
    {
        if (i <= col)
        {
            int tmp = i;
            for (int j = 0; j < col-i; j++)
                printf("%c",c+tmp++);
            for (int j = i; j > 0; j--)
                printf("%c",c+j-1);
                
        }else{
            for (int j = col-1; j >= 0; j--)
                printf("%c",c+j);
        }
        printf("\n");
    }
}
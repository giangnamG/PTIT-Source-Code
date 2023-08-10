#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    char c = '@';
    char tmp = c;
    for (int i = 0; i < row; i++)
    {
        if(i < col)
        {
            for (int j = 0; j < col-i; j++)
                printf("%c", tmp+j);
            for (int j = col-i;j < col; j++)
                printf("%c", tmp+col-i-1);
            tmp ++;
        }else{
            for (int j = 0; j < col; j++)
                printf("%c", c+col-1);
        }
        printf("\n");
    }
}
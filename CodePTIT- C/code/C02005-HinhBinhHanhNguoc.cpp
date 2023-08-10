#include <stdio.h>

int main()
{
    int row_num, col_num;
    scanf("%d%d", &row_num, &col_num);
    int cnt = 0;
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < cnt; j++)
            printf("~");
        cnt ++;
        for (int j = 0; j < col_num; j++)
        {   
            printf("*");
        }
        printf("\n");
    }
}
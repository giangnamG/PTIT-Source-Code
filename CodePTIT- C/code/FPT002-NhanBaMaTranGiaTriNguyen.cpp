#include <stdio.h>

int a[100][100], b[100][100], c[100][100], res[100][100];
int m, n, p, q;

void create_matrix()
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &c[i][j]);
}
void multiply_matrix()
{
    int tmp[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            tmp[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                tmp[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                res[i][j] += tmp[i][k] * c[k][j]; 
            }
        }
    }   
}
void print_matrix(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main()
{
    scanf("%d%d%d%d", &m, &n, &p, &q);
    create_matrix();
    multiply_matrix();
    print_matrix(res, m, q);

}
/*
4    3    2    2
2    5    4    
4    1    9    
3    5    2    
3    9    3    
5    7    
3    7    
2    4    
7    7    
5    4
*/
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[100][100], m=0 ,k=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        k = 0;
        if (i==0 || i==2*n-2)
        {
            for (int j = 0; j < 2*n-1; j++)
                a[m][k++] = n;
        }else if(i<n){
            int x = n;
            for (int j = 0; j < 2*n-1; j++)
            {
                if(j<i)
                    a[m][k++] = x--;
                else if(j > 2*n-3-i)
                    a[m][k++] = x++;
                else
                    a[m][k++] = x;
            }
        }
        m++;
    }
    for (int i = 0; i <= m/2; i++)
    {
        for (int j = 0; j < k; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
    for (int i = m/2-1; i >= 0; i--)
    {
        for (int j = 0; j < k; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
}
/*
4
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
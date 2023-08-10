#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[100], check[100000]={0};
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        check[a[i]] ++;
    }
    int dem = 0;
    int b[100], k = 0;
    for (int i = 0; i < n; i++)
        if (check[a[i]]>1)
        {
            dem ++;
            check[a[i]] = 0;
            b[k++] = a[i];
        }
    printf("%d\n", dem);
    for (int i = 0; i < k; i++)
        printf("%d ", b[i]);
}
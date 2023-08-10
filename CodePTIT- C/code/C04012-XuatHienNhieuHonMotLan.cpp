#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[100], check[100000]={0};
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        check[a[i]] ++;
    }
    for (int i = 0; i < n; i++)
        if (check[a[i]]>1)
        {
            check[a[i]] = 0;
            printf("%d ", a[i]);
        }

}
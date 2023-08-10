#include <stdio.h>

void process()
{
    int n; scanf("%d", &n);
    int a[100], check[100000]={0};
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        check[a[i]] ++;
    }
    for (int i = 0; i < n; i++)
        if (check[a[i]]>0)
        {
            printf("%d xuat hien %d lan\n", a[i], check[a[i]]);
            check[a[i]] = 0;
        }
}
int main()
{
    int t; scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("Test %d:\n", i);
        process();
    }
}
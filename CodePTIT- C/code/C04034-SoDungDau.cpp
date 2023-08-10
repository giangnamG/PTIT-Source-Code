#include <stdio.h>

void process()
{
    int n; scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int b[1000], k = 0;
    for (int i = 0; i < n; i++){
        int check = 0;
        for (int j = i + 1; j < n; j++)
            if (a[i] <= a[j])
            {
                check = 1;
                break;
            }
        if (!check)
            b[k++] = a[i];
    }
    for (int i = 0; i < k; i++)
        for (int j = i; j < k; j++)
            if (b[i] < b[j])
            {
                int x = b[i];
                b[i] = b[j];
                b[j] = x;
            }
    for (int i = 0; i < k; i++)
        printf("%d ", b[i]);
    printf("\n");   
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
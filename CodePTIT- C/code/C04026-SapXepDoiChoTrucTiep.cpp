#include <stdio.h>

void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}
int main()
{
    int n; scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for (int i = 0; i < n-1; i++)
    {
        printf("Buoc %d: ", i+1);
        for (int j = i+1; j < n; j++)
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
        for (int j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int n;
    int a[100];
    scanf("%d", &n);
    int x = 1;
    int dem = 0;
    if (n == 0)
        printf("0");
    while (n != 0)
    {
        int m = n % 2;
        a[x] = m;
        n /= 2;
        x++;
        dem++;
    }
    for (int i = dem; i > 0; i--)
    {
        printf("%d", a[i]);
    }
}
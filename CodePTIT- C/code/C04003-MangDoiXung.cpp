#include <stdio.h>

void process()
{
    int n; scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int b[100], k = 0;
    for (int i = n-1; i >= 0; i--)
        b[k++] = a[i];
    int check = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
        {
            check = 1;
            break;
        }
    if (!check)
        printf("YES\n");
    else
        printf("NO\n");

}
int main()
{
    int t; scanf("%d",&t);
    while (t--)
        process();    
}
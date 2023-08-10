#include <stdio.h>


void process()
{
    int n; scanf("%d", &n);
    int a[100], b[30001]={0};
    int max = -1;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]] ++;
        max = max > b[a[i]] ? max : b[a[i]];
    }
    for (int i=0; i<n; i++)
        if (b[a[i]] == max)
        {
            printf("%d ", a[i]);
            b[a[i]] = 0;
        }
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
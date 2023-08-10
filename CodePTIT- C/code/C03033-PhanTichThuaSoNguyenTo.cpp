#include <stdio.h>
#include <math.h>

void process()
{
    int n; scanf("%d", &n);
    printf("%d = ", n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        int dem = 0;
        if (n%i == 0)
        {
            printf("%d^",i);
            while(n%i==0)
            {
                dem ++;
                n/=i;
            }
            printf("%d",dem);
            if (n > 1)
                printf(" * ");
        }
    }
    if (n > 1)
        printf("%d^1", n);
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
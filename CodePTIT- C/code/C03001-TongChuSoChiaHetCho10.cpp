#include <stdio.h>

int main()
{
    int t; scanf("%d", &t);
    int n;
    while(t--)
    {
        scanf("%d", &n);
        int sum = 0;
        while(n>0)
        {
            sum += n%10;
            n/=10;
        }
        sum % 10 == 0 ? printf("YES\n") : printf("NO\n");
    }
}
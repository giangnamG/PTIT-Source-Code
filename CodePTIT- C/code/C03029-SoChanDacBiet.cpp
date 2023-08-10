#include <stdio.h>

void process()
{
    long long n; scanf("%lld", &n);
    int check = 0;
    if (n % 2 != 0)
        check = 1;
    else{
        while(n>0)
        {
            if (n%2 != 0)
            {
                check = 1;
                break;
            }
            n/=10;
        }
    }
    !check ? printf("YES\n") : printf("NO\n"); 
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
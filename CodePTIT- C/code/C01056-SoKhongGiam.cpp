#include <stdio.h>

void process()
{
    long long n; scanf("%lld", &n);
    int tmp = n%10;
    n/=10;
    int check = 0;
    while(n>0)
    {
        if (n%10 <= tmp)
        {
            tmp = n%10;
        }else{
            check = 1;
            break;
        }
        n/=10;
    }
    !check ? printf("YES\n") : printf("NO\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
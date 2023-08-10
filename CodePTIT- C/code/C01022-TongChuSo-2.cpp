#include <stdio.h>

void process()
{
    int n; scanf("%d", &n);
        int sum = 0;
        while (n)
        {
            sum += n%10;
            n /= 10;
        }
        printf("%d\n", sum);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
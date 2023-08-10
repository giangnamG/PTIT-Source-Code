#include <stdio.h>
#include <math.h>

int check(int n)
{
    int tmp = n, num = 0, sum = 0;
    while (tmp)
    {
        if (tmp%10 == 4)
            return 0;
        sum += tmp%10;
        num = num * 10 + tmp%10;
        tmp /= 10;
    }
    return num == n && sum %10 == 0;    
}

void process()
{
    int n; scanf("%d", &n);
    int l = pow(10, n-1);
    int r = pow(10, n);
    for (int i = l; i <= r; i++)
        if (check(i))
            printf("%d ", i);
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
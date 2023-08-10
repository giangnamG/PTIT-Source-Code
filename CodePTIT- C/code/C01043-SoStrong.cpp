#include <stdio.h>
#include <math.h>

int gt(int n)
{
    if (n < 2) return 1;
    return n*gt(n-1);
}
int main()
{
    int n; scanf("%d", &n);
    int tmp = n;
    int sum = 0;
    while(tmp)
    {
        sum += gt(tmp%10);
        tmp /= 10;
    }
    if(sum == n)
        printf("1");
    else
        printf("0");

}
#include <stdio.h>
#include <math.h>

int check(int n)
{
    int tmp = n%10;
    n/=10;
    while (n>0)
    {
        if(n % 10 > tmp)
            return 0;
        tmp = n%10;
        n/=10;
    }
    return 1;
}
void process()
{ 
    int n;
    scanf("%d", &n);
    int l = pow(10, n-1)+1;
    int r = pow(10, n);
    for (int i = l; i < r; i++)
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
#include <stdio.h>
#include <math.h>

void process()
{
    int n; scanf("%d", &n);
    int res = 1;
    for (int i = 2; i <=  sqrt(n); i++)
        if(n%i==0)
        {
            res *= i;
            while (n%i==0)
                n/=i;            
        }
    if (n>1)
        res *= n;
    printf("%d\n", res);
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
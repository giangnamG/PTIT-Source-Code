// C01054
#include <stdio.h>
#include <math.h>

int main()
{
    int n; scanf("%d", &n);
    long long res = 0;
    while (n--)
    {
        int x; scanf("%d", &x);
        for (int i = 2; i <= sqrt(x); i++)
            while (x%i==0){
                res += i;
                x/=i;    
            }        
        if (x>1)
            res += x;
    } 
    printf("%lld", res);   
}
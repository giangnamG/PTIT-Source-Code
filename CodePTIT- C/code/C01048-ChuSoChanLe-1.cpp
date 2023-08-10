#include <stdio.h>
#include <math.h>

int main()
{
    int n; scanf("%d", &n);
    int chan = 0;
    int le = 0;
    while(n)
    {
        if((n%10)%2==0)
            chan ++;
        else
            le ++;
        n/=10;
    }
    printf("%d %d", le, chan);

}
#include <stdio.h>
#include <math.h>


void process()
{
    int n; scanf("%d", &n);
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (i%2==0)
                dem ++;
            if ((n/i)%2==0)
                dem ++;
            if (i % 2 == 0 && i * i == n)
                dem--;
        }
    }

    printf("%d\n", dem);
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
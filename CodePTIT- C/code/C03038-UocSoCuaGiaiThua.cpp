#include <stdio.h>

void process()
{
    int n, p;
    scanf("%d%d", &n, &p);
    int x = 0; 
    for (int i = 2; i <= n; i++)
        if (i % p == 0)
        {
            int tmp = i;
            while (tmp%p==0)
            {
                x++;
                tmp /= p;
            }
        }
    printf("%d\n", x);
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
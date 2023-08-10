#include <stdio.h>
#include <math.h>
int test = 1;
void process()
{

    int n; scanf("%d", &n);
    printf("Test %d: ", test++);
    int dem = 0;
    if (n % 2 == 0)
    {
        while (n%2 == 0)
        {
            n/=2;
            dem ++;
        }
        printf("2(%d) ",dem);
    }
    for (int i = 3; i <= sqrt(n); i++)
    {
        dem = 0;
        if (n % i == 0)
        {
            while (n%i == 0)
            {
                n/=i;
                dem ++;
            }
            printf("%d(%d) ", i, dem);
        }
    }
    if (n > 1)
        printf("%d(1) ", n);

    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        process();
    }
}
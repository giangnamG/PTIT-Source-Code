#include <stdio.h>
#include <math.h>
void process()
{
    int n; scanf("%d", &n);
    while(n%2 == 0)
    {
        printf("2 ");
        n/=2;
    }
    for (int i = 3; i<= sqrt(n); i+=2)
        while(n%i == 0)
        {
            printf("%d ", i);
            n/=i;
        }
    if (n>1)
        printf("%d ",n);
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
#include <stdio.h>
#include <math.h>

void process()
{
    int n; scanf("%d",&n);
    int value = sqrt(n);
    if(value*value == n)
        printf("YES\n");
    else
        printf("NO\n");

}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
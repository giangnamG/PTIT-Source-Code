#include <stdio.h>
#include <limits.h>

int main()
{
    int min = INT_MAX, max = INT_MIN;
    int n;
    while (scanf("%d", &n) != EOF)
    {
        max = max > n ? max : n;            
        min = min < n ? min : n;
    }
    printf("%d %d", max, min);
    
}
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int to_a = a*(a+1)/2;
    int to_b = b*(b+1)/2;
    printf("%d",to_b-to_a+a);
}
#include <stdio.h>
int ucln(int a, int b)
{
    while(b){
        int x = a%b;
        a = b;
        b = x;
    }
    return a;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int uoc = ucln(a, b);
    long long boi = (long long)a*b / uoc;
    printf("%d\n%lld", uoc, boi);
}
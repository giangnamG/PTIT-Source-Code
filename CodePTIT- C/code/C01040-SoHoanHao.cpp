#include <stdio.h>
#include <math.h>
int HoanHao(int n)
{
    int a[] = {2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 127, 521, 607, 1279, 2203, 2281, 3217, 4253, 4423, 9689, 9941, 11213, 19937, 21701, 23209, 44497, 86243, 110503, 132049, 216091, 756839, 859433, 1257787, 1398269, 2976221, 3021377, 6972593, 13466917};
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < len; i++)
        if(n == pow(2,i-1)*(pow(2,i)-1))
            return 1;
    return 0;
}
int main()
{
    int n; scanf("%d", &n);
    if(HoanHao(n))
        printf("1");
    else
        printf("0");
}
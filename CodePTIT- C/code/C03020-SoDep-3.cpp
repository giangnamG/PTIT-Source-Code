#include <stdio.h>

int Solved(int n)
{
    int tmp = n, rev = 0, sum = 0;
    int check_6 = 0;
    while (tmp)
    {
        if(tmp%10 == 6)
            check_6 = 1;
        rev = rev*10 +tmp%10;
        sum += tmp%10;
        tmp /= 10;
    }
    return check_6 && rev == n && sum % 10 == 8;
}
int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    if(l > r)
    {
        int x = l;
        l = r;
        r = x;
    }
    int dem = 0;
    for (int i = l; i <= r; i++)
        if (Solved(i))
            printf("%d ", i);
}
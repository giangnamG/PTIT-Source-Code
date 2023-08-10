#include <stdio.h>
#include <math.h>

int Solved(int n)
{   
    int tmp = n, sum=0, rev=0;
    while (tmp)
    {
        rev = rev*10 + tmp%10;
        sum += tmp%10;
        tmp /= 10;
    }
    return sum%10==0 && rev==n;   
}
void process()
{
    int n; scanf("%d", &n);
    int l = pow(10,n-1);
    int r = pow(10,n);
    int dem = 0;
    for (int i = l; i <= r; i++)
        if(Solved(i))
            dem ++;
    printf("%d\n",dem);
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
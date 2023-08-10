#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i<= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int IsTN(int n)
{
    int num = 0;
    int tmp = n;
    while(tmp > 0)
    {
        num = num*10 + tmp%10;
        tmp /= 10; 
    }
    return num == n;

}
void process()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    int cnt = 0;
    for (int i = a; i <= b; i++)
        if (IsTN(i) && IsPrime(i))
        {
            cnt += 1;
            if (cnt != 10)
                printf("%d ", i);
            else{
                printf("%d\n", i);
                 cnt = 0;
            }
        }
    printf("\n\n");
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
        process();
}
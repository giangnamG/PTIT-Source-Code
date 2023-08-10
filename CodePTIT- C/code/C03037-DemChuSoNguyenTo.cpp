#include <stdio.h>
#include <math.h>

struct Result {
    int x, cnt;
};
long long reverse(long long n)
{
    long long num = 0;
    while(n)
    {
        num = num * 10 + n % 10;
        n/=10;
    }
    return num;
}

void process()
{
    long long n; scanf("%lld", &n);
    n = reverse(n);
    struct Result res[20];
    for (int i = 0; i < 20; i++)
    
        res[i].x = res[i].cnt = 0;
    
    int k = 0;
    while(n)
    {
        int x = n % 10;
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            if (res[0].x == 0)
            {
                res[0].x = x;
                res[0].cnt ++;
                k++;
            }else{
                int check = 0;
                for (int i = 0; i < k; i++)
                    if (res[i].x == x){
                        res[i].cnt ++;
                        check = 1;
                        k ++;
                        break;
                    }
                if(!check)
                {
                    res[k].x = x;
                    res[k].cnt ++;
                    k++;
                }
            }
        }
        n/=10;
    }
    for (int i = 0; i < k; i++)
        if (res[i].x > 1)
            printf("%d %d\n",res[i].x, res[i].cnt);
}
int main()
{
    // int t; scanf("%d", &t);
    // while(t--)
        process();
}
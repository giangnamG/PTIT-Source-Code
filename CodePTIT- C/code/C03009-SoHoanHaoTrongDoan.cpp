#include <stdio.h>
#include <math.h>

int main()
{
    int a, b; 
    scanf("%d%d", &a, &b);
    if (a > b){
        int x = a;
        a = b;
        b = x;
    }
    if (a < 6)
        a = 6;
    else if(a%2==0&&a!=6)
        a++;
    for (int i = a; i <= b; i++)
        if (i == 6)
            printf("%d ", i);
        else{
            for (int p = 3; p <= 20; p+=2)
                if (pow(2,p-1)*(pow(2,p)-1) == i)
                    printf("%d ", i);
        }
}
#include <stdio.h>
#include <math.h>

int main()
{
    int n; scanf("%d", &n);
    if (n >= 6){
        printf("6 ");
        for (int i = 6; i <= n; i++)
            for (int p = 3; p <= 20; p+=2)
                if (pow(2,p-1)*(pow(2,p)-1) == i)
                    printf("%d ", i);
    }
}
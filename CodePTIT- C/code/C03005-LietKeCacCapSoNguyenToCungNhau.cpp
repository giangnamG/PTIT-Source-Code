#include <stdio.h>

int ucln(int a, int b)
{
    while(b)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++)
        for (int j = i+1; j <= b; j++)
            if (ucln(i, j)==1)
                printf("(%d,%d)\n", i, j);
}
#include <stdio.h>
#include <string.h>

struct pokemon{
    char name[100];
    int require, having;
    int quantity;
};
void input(struct pokemon *p)
{
    scanf("\n%s", &p->name);
    scanf("%d%d", &p->require, &p->having);
    int having = p->having, cnt = 0;
    while(having >= p->require)
    {
        cnt++;
        having -= p->require;
        having += 2;
    }
    p->quantity = cnt;
}
int main()
{
    int n; scanf("%d", &n);
    struct pokemon P[1000];
    int total = 0, max = -999; 
    for (int i = 0; i < n; i++)
    {
        input(&P[i]);
        total += P[i].quantity;
        max = max > P[i].quantity ? max : P[i].quantity;
    }
    for (int i = 0; i < n; i++)
        if (P[i].quantity == max)
        {
            printf("%d\n%s", total, P[i].name);
            break;
        }
}
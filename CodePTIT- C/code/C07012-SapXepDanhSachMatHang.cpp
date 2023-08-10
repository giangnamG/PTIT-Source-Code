#include <stdio.h>
#include <string.h>

struct MH{
    int id;
    char name[100];
    char group[100];
    float price, sell, profit;
};
int n, id = 0;
struct MH a[100];

void input()
{
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        a[i].id = ++id;
        gets(a[i].name);
        gets(a[i].group);
        scanf("%f", &a[i].price);
        scanf("%f\n", &a[i].sell);
        a[i].profit = a[i].sell - a[i].price;
    }
}
void sort()
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (a[j].profit > a[i].profit)
            {
                struct MH mh = a[j];
                a[j] = a[i];
                a[i] = mh;
            }
}
void output()
{
    for (int i = 0; i < n; i++)
        printf("%d %s %s %.2f\n", a[i].id, a[i].name, a[i].group, a[i].profit);
}
int main()
{
    input();
    sort();
    output();
}
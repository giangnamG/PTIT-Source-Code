#include <stdio.h>
#include <string.h>

struct TS{
    int id;
    char name[100];
    char birth[100];
    float point_1, point_2, point_3;
    float point_total;
};
int n, id=0;
float max = -999;
struct TS a[1000];
void input()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {        
        a[i].id = ++id;
        scanf("\n%[^\n]s", &a[i].name);
        scanf("%s", &a[i].birth);
        scanf("%f", &a[i].point_1);
        scanf("%f", &a[i].point_2);
        scanf("%f", &a[i].point_3); 

        a[i].point_total = a[i].point_1 + a[i].point_2 + a[i].point_3;
        max = max > a[i].point_total ? max : a[i].point_total;
    }
}
void output()
{
    for (int i = 0; i < n; i++)
        if(a[i].point_total == max)
            printf("%d %s %s %.1f\n", a[i].id, a[i].name, a[i].birth, a[i].point_total);
}
int main()
{
    input();
    output();
}
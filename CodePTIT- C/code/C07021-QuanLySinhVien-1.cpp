#include <stdio.h>
#include <string.h>

struct SV{
    int id;
    char name[100];
    float a, b, c;
    float total;
};
struct SV sv[1000];
int n;
void input()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sv[i].id = i+1;
        scanf("\n%[^\n]s", &sv[i].name);
        scanf("%f%f%f", &sv[i].a, &sv[i].b, &sv[i].c);
        sv[i].total = sv[i].a + sv[i].b + sv[i].c;
    }
}
void option1()
{
    input();
    printf("%d\n", n);
}
void option2()
{
    int id; scanf("%d", &id);
    id -= 1;
    scanf("\n%[^\n]s", &sv[id].name);
    scanf("%f%f%f", &sv[id].a, &sv[id].b, &sv[id].c);
    sv[id].total = sv[id].a + sv[id].b + sv[id].c;
    printf("%d\n",id+1);
}
void list()
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (sv[i].total > sv[j].total)
            {
                struct SV x = sv[i];
                sv[i] = sv[j];
                sv[j] = x;
            }
    for (int i = 0; i < n; i++)
        printf("%d %s %.1f %.1f %.1f\n",sv[i].id, sv[i].name, sv[i].a, sv[i].b, sv[i].c); 
}
int main()
{
    int option; 
    while(1)
    {
        scanf("%d", &option);
        if(option == 1)
            option1();
        else if(option == 2)
            option2();
        else
            break;
    }
    list();
}
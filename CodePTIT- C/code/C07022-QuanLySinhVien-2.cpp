#include <stdio.h>
#include <string.h>

struct SV{
    int id;
    char name[100];
    float a, b, c;
    int IsIncrement;
};
struct SV sv[1000];
int n;

void add_new()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sv[i].id = i+1;
        scanf("\n%[^\n]s", &sv[i].name);
        scanf("%f%f%f", &sv[i].a, &sv[i].b, &sv[i].c);
        sv[i].IsIncrement = sv[i].a < sv[i].b && sv[i].b < sv[i].c ? 1 : 0;
    }
    printf("%d\n",n);
}
void update()
{
    int id; scanf("%d", &id);
    id -= 1;
    scanf("\n%[^\n]s", &sv[id].name);
    scanf("%f%f%f", &sv[id].a, &sv[id].b, &sv[id].c);
    sv[id].IsIncrement = sv[id].a < sv[id].b && sv[id].b < sv[id].c ? 1 : 0;
    printf("%d\n",id+1);
}
void list()
{
    for (int i = 0; i < n; i++)
        if(sv[i].IsIncrement)
            printf("%d %s %.1f %.1f %.1f\n", sv[i].id, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
}
int main()
{
    int option;
    while (1)
    {
        scanf("%d", &option);
        switch (option)
        {
            case 1:
                add_new();
                break;
            case 2:
                update();
                break;
            case 3:
                list();
                return 0;
        }
    }
    
}
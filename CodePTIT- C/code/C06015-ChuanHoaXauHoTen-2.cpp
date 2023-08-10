#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct HoTen{
    char s[100];
};
void to_lower(char *p)
{
    while (*p)
    {
        *p = tolower(*p);
        *p ++;
    }
}
void to_upper(char *p)
{
    while (*p)
    {
        *p = toupper(*p);
        *p ++;
    }
}
void process()
{
    char s[100];
    scanf("\n%[^\n]s",&s);
    struct HoTen name[10];
    char *p = strtok(s, " ");
    int k = 0;
    while (p!=NULL)
    {
        to_lower(p);
        *p = toupper(*p);
        strcpy(name[k++].s, p);
        p = strtok(NULL, " ");
    }
    
    for (int i = 1; i < k; i++){
        printf("%s", name[i].s);
        if (i == k-1)
            printf(",");
        else
            printf(" ");
    }
    to_upper(name[0].s);
    printf(" %s\n", name[0].s);
    // printf("\n");       
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
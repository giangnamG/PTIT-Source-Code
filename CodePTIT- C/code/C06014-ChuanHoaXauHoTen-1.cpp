#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lower(char *p)
{
    while (*p)
    {
        *p = tolower(*p);
        *p ++;
    }
}
void process()
{
    char s[100];
    scanf("\n%[^\n]s", &s);
    char *p = strtok(s," ");
    while (p != NULL)
    {
        lower(p);
        *p = toupper(*p);
        printf("%s ", p);
        p = strtok(NULL," ");
    }
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t);
    while (t--)
        process();    
}
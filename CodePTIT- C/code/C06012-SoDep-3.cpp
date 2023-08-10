#include <stdio.h>
#include <string.h>

int check(char s[])
{
    int n = strlen(s);
    for (int i = 0; i < n; i++) 
    if (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
        return 0;
    return 1;
}
int IsReversed(char s[])
{
    char rev[500], k=0;
    int n = strlen(s);
    for (int i = n-1; i >= 0; i--)
        rev[k++] = s[i];
    rev[k] = '\0';
    return !strcmp(rev, s);
}
void process()
{
    char s[500]; gets(s);
    if (check(s) && IsReversed(s))
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int t; scanf("%d\n", &t);
    while (t--)
        process();    
}
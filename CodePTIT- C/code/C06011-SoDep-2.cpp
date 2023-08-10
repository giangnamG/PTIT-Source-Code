#include <stdio.h>
#include <string.h>

int check(char s[])
{
    int n = strlen(s);
    if (s[0] != '8' || s[n-1] != '8')
        return 0;
    int val = 0;
    for (int i = 0; i < n; i++)
        val += s[i]-'0';
    return val%10==0;
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
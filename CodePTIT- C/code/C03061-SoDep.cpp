#include <stdio.h>
#include <string.h>

void xoa(char s[], int index)
{
    int n = strlen(s);
    for (int i = index; i < n; i++)
        s[i] = s[i+1];
    s[n] = '\0';
}
void process()
{
    char s[20];
    scanf("%s", &s);
    int n = strlen(s);
    if (s[n-1]-48 == 2*(s[0]-48) || s[0]-48 == 2*(s[n-1]-48))
    {
        xoa(s, 0);
        n = strlen(s);
        xoa(s, n-1);
        char tmp[20];
        int k = 0, n = strlen(s);
        for (int i = n-1; i >= 0; i--)
        {
            tmp[k++] = s[i];
        }
        tmp[k] = '\0';
        if (strcmp(tmp, s) == 0)
            printf("YES\n");
        else
            printf("NO\n");

    }else
        printf("NO\n");
}
int main()
{
    int t; scanf("%d", &t); fflush(stdin);
    while (t--)
        process();    
}
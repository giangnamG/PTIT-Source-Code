#include <stdio.h>
#include <string.h>

void xoa(char s[], int index)
{
    int n = strlen(s);
    for (int i = index; i < n; i++)
        s[i] = s[i+1];
    s[n-1] = '\0';
}
void process()
{
    char s[20];
    scanf("%s", &s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (s[i] > s[j])
            {
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
            }
    while (s[0]=='0')
        xoa(s,0);
    printf("%s\n",s);    
}
int main()
{
    int t; scanf("%d", &t); fflush(stdin);
    while (t--)
        process();    
}
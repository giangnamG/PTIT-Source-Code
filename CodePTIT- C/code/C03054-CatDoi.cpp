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
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' || s[i] == '0' || s[i] == '8' || s[i] == '9')
        {
            if (s[i] == '8' || s[i] == '9')
                s[i] = '0';
        }else{
            check = 1;
            break;
        }
    }
    while(s[0]=='0')
        xoa(s, 0);
    check || strlen(s) == 0 ? printf("INVALID\n") : printf("%s\n", s);
}
int main()
{
    int t; scanf("%d", &t); fflush(stdin);
    while(t--)
        process();
}
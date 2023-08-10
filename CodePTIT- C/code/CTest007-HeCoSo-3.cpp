#include <stdio.h>
#include <string.h>

void process()
{
    char s[20]; scanf("%s", &s);
    int check = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i]!='0'&&s[i]!='1'&&s[i]!='2')
        {
            check = 1;
            break;
        }
    !check ? printf("YES\n") : printf("NO\n");    
}
int main()
{
    int t; scanf("%d\n", &t);
    while (t--)
        process();    
}
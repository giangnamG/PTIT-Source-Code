#include <stdio.h>
#include <string.h>

void process()
{
    char s[100]; scanf("%s", &s);
    // int x[100]={0}; 
    int n = strlen(s);
    
    for (int i = 0; i < n; i++)
    {
        printf("%c", s[i]);
        int j = i, dem = 0;
        if (s[i] == s[j])
        {
            while(s[i]==s[j])
            {
                dem ++;
                j++;
            }
            i = j-1;
        }
        printf("%d", dem);
    }
    printf("\n");
}
int main()
{
    int t; scanf("%d", &t); fflush(stdin);
    while(t--)
        process();
}
/*
2
AAAAAAAA
AAECCCCGGGD
*/
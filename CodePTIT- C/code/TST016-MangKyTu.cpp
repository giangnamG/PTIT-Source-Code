#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[501];
    scanf("%s", s);
    getchar();
    int l = strlen(s);
    int yes = 1;
    if (l % 2 != 0)
        yes = 0;
    else
    {
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '(')
                s[i] = ')';
            if (s[i] == '[')
                s[i] = ']';
            if (s[i] == '{')
                s[i] = '}';
        }
        for (int i = 0; i < l / 2; i++)
        {
            if (s[i] != s[l - i - 1])
            {
                yes = 0;
                break;
            }
        }
    }
    if (yes)
        printf("1\n");
    else
        printf("0\n");
}
/*
(,),{,},[,],',',","
*/
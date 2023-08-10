#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    char *s = strtok(s1, " ");
    while (s != NULL)
    {
        if (strcmp(s, s2) != 0)
            printf("%s ", s);
        s = strtok(NULL, " ");
    }
    
}
#include <stdio.h>
#include <string.h>
int main()
{
    char res[100][100];
    int l = 0;
    int max = 0;
    char n[100];
    while (scanf("%s", &n) != -1)
    {
        if (strlen(n) > max)
        {
            strcpy(res[l], n);
            max = strlen(n);
            ++l;
        }
    }
    for (int i = 0; i < l; ++i)
        if (strlen(res[i]) == max)
            printf("%s - %d", res[i], strlen(res[i]));
}
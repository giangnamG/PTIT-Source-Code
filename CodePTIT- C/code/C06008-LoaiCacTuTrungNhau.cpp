#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], res[100][100];
    gets(s1);
    char *p = strtok(s1, " "); 
    int k = 0; 
    strcpy(res[k++],p);  
    while (p != NULL)
    {
        int check = 0;
        for (int i = 0; i < k; i++)
            if(strcmp(p,res[i]) == 0)
            {
                check = 1;
                break;
            }  
        if (!check)
            strcpy(res[k++],p);
        p = strtok(NULL, " "); 
    }
    for (int i = 0; i < k; i++)
        printf("%s ",res[i]);
}
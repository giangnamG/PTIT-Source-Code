#include <stdio.h>
#include <string.h>
void xoa(char s[],int index)
{
    int n = strlen(s);
    for (int i = index; i< n; i++)
        s[i] = s[i+1];
    s[n-1] = '\0';
}
int main()
{
    char s[10];
    scanf("%s", &s);
    int n = strlen(s);
    if(s[n-1] == '0')
    {
        s[n-1] = s[0];
        xoa(s,0);
    }else{
        char tmp = s[n-1];
        s[n-1] = s[0];
        s[0] = tmp;
    }
    printf("%s",s);
}
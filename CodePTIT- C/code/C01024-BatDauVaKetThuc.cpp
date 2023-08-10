#include <stdio.h>
#include <string.h>
void process()
{
    char s[20];
    scanf("%s", &s);
    if (s[0] == s[strlen(s) - 1])
        printf("YES\n");
    else 
        printf("NO\n");

}
int main()
{
    int t; scanf("%d", &t); fflush(stdin);
    while(t--)
        process();
}
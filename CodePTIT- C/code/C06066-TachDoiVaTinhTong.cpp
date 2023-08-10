#include <stdio.h>
#include <string.h>

void insert(char s[],char c)
{
    int n = strlen(s);
    for (int i=n; i>0; i--)
        s[i] = s[i-1];
    s[0]=c;
    s[n+1] = '\0';
}
void GetSum(char sum[], char s1[], char s2[])
{
    if (strlen(s1)<strlen(s2))
    {
        char tmp[200];
        strcpy(tmp, s1);
        strcpy(s1,s2);
        strcpy(s2,tmp);
    }
    while(strlen(s1)!=strlen(s2))
        insert(s2,'0');
    // printf("%s %s\n",s1,s2);
    int n1 = strlen(s1), n2 = strlen(s2);
    int mem = 0, k=0;
    for (int i=n1-1; i>=0; i--)
    {
        int num = s1[i]-'0' + s2[i]-'0' + mem;
        mem = num/10;
        num %= 10; 
        sum[i] = num+'0';
        k++;
    }
    if(mem){
        insert(sum,mem+'0');
        k++;
    }
    sum[k] = '\0';
}

int main()
{
    char s[200]; gets(s);
    char sum[200];
    while (strlen(s) > 1)
    {
        int n = strlen(s);
        char s1[100]; strncpy(s1, s, n/2);
        s1[n/2] = '\0';
        char s2[100]; strcpy(s2, s+n/2);
        GetSum(sum,s1,s2);
        printf("%s\n",sum);
        strcpy(s,sum);
    }
    
}
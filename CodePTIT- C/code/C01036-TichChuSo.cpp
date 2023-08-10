#include <stdio.h> 
#include <math.h> 
int main () 
{ 
    int a; scanf("%d",&a); 
    int b=1; 
    while(a > 0)
    { 
        b *= a%10; 
        a /= 10;
    } 
    printf("%d",b); 
}
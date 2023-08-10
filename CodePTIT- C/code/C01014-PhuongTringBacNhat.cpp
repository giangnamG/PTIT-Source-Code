#include <stdio.h>
 int main()
{ 
    float a, b, x; scanf ("%f%f", &a, &b);
    if (a!=0) 
    { 
        x = -b/a; 
        printf ("%0.2f",x); 
    } 
    else 
    { 
        if (b!= 0) 
            printf ("Vo nghiem"); 
        else 
            printf ("Vo so nghiem"); 
    } 
}
#include <stdio.h>
#include <math.h>
struct ps                                                            
{                                                                              
    long long tu, mau;                                                                
};                                                                             
typedef struct ps ps;                                                          
long long gcd(long long a, long long b)                                                             
{                                                                              
    while (b)                                                                  
    {                                                                          
        long long r = a % b;                                                          
        a = b;                                                                 
        b = r;                                                                 
    }                                                                          
    return a;                                                                  
}                                                                              
long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }                               
ps rut_gon(ps a)                                                               
{                                                                              
    long long ucln = gcd(a.tu, a.mau);                                                
    a.tu /= ucln;                                                              
    a.mau /= ucln;                                                             
    return a;                                                                  
}                                                                              
ps quy_dong(ps a, long long mc)                                                       
{                                                                              
    ps res;                                                                    
    res.mau = mc;                                                              
    res.tu = mc / a.mau * a.tu;                                                
    return res;                                                                
}                                                                              
ps tong(ps a, ps b)                                                            
{                                                                              
    ps res;                                                                    
    long long mc = lcm(a.mau, b.mau);                                                 
    a.tu = mc / a.mau * a.tu;                                                  
    b.tu = mc / b.mau * b.tu;                                                  
    res.tu = a.tu + b.tu;                                                      
    res.mau = mc;                                                              
    return rut_gon(res);                                                       
}                                                                              
ps thuong(ps a, ps b)                                                          
{                                                                              
    ps res;                                                                    
    res.tu = a.tu * b.mau;                                                     
    res.mau = a.mau * b.tu;                                                    
    return rut_gon(res);                                                       
}                                                                              
int main()                                                                     
{                                                                              
    int t, k = 1;                                                              
    scanf("%d", &t);                                                           
    while (t--)                                                                
    {                                                                          
        ps a, b;                                                               
        scanf("%lld %lld %lld %lld", &a.tu, &a.mau, &b.tu, &b.mau);            
        printf("Case #%d:\n", k++);                                            
        a = rut_gon(a);                                                        
        b = rut_gon(b);                                                        
        long long mc = lcm(a.mau, b.mau);                                             
        ps tmp1 = quy_dong(a, mc), tmp2 = quy_dong(b, mc);                     
        printf("%lld/%lld %lld/%lld\n", tmp1.tu, tmp1.mau, tmp2.tu, tmp2.mau); 
        ps t = tong(a, b), th = thuong(a, b);                                  
        printf("%lld/%lld\n%lld/%lld", t.tu, t.mau, th.tu, th.mau);            
        printf("\n");                                                          
    }                                                                          
    return 0;                                                                  
}
#include <stdio.h>
#include <math.h>


int main(){
    long long int n, m, x, a, b;
    scanf("%lld %lld",& n,&m);
    a = n;
    b = m;
    if(n >= m){
        while(m != 0){
            x = n % m;
            n = m;
            m = x;
        }
        m = a * b / n;
        printf("%lld %lld", n, m);
    }
    else if(n < m){
        while(n != 0){
            x = m % n;
            m = n;
            n = x;
        }
        n = a * b / m;
        printf("%lld %lld", m, n);
    }
}
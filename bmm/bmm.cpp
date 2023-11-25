#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int n, m, save, kmm, bmm, x;
    cin >> n >> m;
    
    if(m > n){
        save = n ;
        x = n % m;
        while(x != 0){

            n = save + n;
            x = n % m;
        }
        kmm = n;
        bmm = save * m / kmm;
    }
    else if(n >= m){
        save = m ;
        x = m % n;
        while(x != 0){
            m = save + m;
            x = m % n;
        }
        kmm = m;
        bmm = save * n / kmm;
    }
    cout << bmm << " " << kmm;
   

}
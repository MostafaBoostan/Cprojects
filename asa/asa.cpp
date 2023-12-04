#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(){
    int n , a , b ,c, i=0;
    cin >> n;
    
    if(n%2 == 0){
        a = n / 2 - 1;
    }
    else
        a = n /2;
    for(; a >= n / 3 ; a--){
        b = n - 2 * a;
        c = (n - a) / 2;
        c = c - b + 1;
        i = i + c;
        
    }
    cout << i;

}


#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
unsigned long long my_even(unsigned long long);


int main(){
    unsigned long long x;
    cin >> x;
    x = my_even(x);
    cout << x;
    
}

unsigned long long my_even(unsigned long long x){
    unsigned long long i, answer, l, f;
    answer = 0;
    f = 1;
    for (i = 1; i <= x; i++){
        for(l = i; l > 1; l--){
            f = f * l;
        }
        answer = answer + (f / i);
        f = 1;
    }
    return answer;
}
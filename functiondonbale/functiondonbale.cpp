#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
long long int donbale(long long int);


int main(){
    long long int x;
    cin >> x;
    x = donbale(x);
    cout << x;
    
}

long long int donbale(long long int x){
    long long int i, answer, l, f;
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
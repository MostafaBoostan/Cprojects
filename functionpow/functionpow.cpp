#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
int my_pow(int);


int main(){
    int x;
    cin >> x;
    x = my_pow(x);
    cout << x;
    
}

int my_pow(int x){
    x = x * x;
    return x;
}
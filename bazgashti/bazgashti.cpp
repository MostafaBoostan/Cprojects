#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
int sum(int);
int main(){
    int n;
    cin >> n;
    n = n -1;
    cout << sum(n);
}
int sum(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return sum(n - 2) + sum(n - 1);
}
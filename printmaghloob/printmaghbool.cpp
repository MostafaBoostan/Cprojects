#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
int main(){
    int n;
    cin >> n;
    char x[n][100];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(n = n-1;n >= 0; n--){
        cout << x[n] << " ";
    }
}

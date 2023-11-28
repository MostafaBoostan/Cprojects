#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int maxi (int, int []);

int main(){
    int x;
    cin >> x;
    int array[x];
    x = maxi(x, array);
    cout << x;
    
}

int maxi(int n, int array[]){
    int i, max, flag, x;
    flag = 1;
    for(i = 0 ; n > i ; i++){
        cin >> array[i];
    }
    n = n - 1;
    while(flag == 1){
        flag = 0;
        for(i = 0; i < n ; i++){
            if(array[i] > array[i+1]){
                x = array[i];
                array[i] = array[i+1];
                array[i + 1] = x;
                flag = 1;
            }
        }
    }
    return array[n];
}
#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
void aval(int);


int main(){
    int x;
    cin >> x;
    aval(x);
    
    
}

void aval(int x){
    int i, sq, flag;
    flag = 0;
    sq = sqrt(x);
    if(x == 1)
        flag = 1;
    
    else
        for (i = 2; i <= sq; i++){
            if(x % i == 0){
                flag = 1;
            }
        }
    
    if(flag == 1){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    
}
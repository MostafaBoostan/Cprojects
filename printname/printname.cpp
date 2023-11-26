#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(){
    char name[300][5];
    int n, i, flag;
    flag = 0;
    cin >> n;
    for(i = 0; i < n ; i++){
        cin >> name[i];
    }

    for(i = 0; i < n; i++){
        if(name[i][0] == 'C'){
            flag = !flag;
            i++;
        }
        if(flag == 1){
            name[i][0] = name[i][0] - 'a' + 'A' ;
            cout << name[i][0];
        }
        else if(flag == 0){
            cout << name[i];
        }
    }

    
}
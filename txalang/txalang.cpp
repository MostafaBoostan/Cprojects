#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(){
    int n, i, l = 0 , f;
    char name[3][300], c[5];
    cin >> name[0] >> name[1] >> name[2];
    n = strlen(name[0]);
    for(n = n/5; n > 0; n--){
        for(i = 0; i < 5 ; i++){
            c[i] = name[0][l];
            l++;
        }
        f = l - 5;
        if(c[0] == '*' && c[1] == '*' && c[2] == '*'){
            cout << "T";
        }
        else if(c[0] == 'o' && c[1] == 'o'){
            cout << "A";
        }
        else if(c[0] == '*' && c[1] == '*' && c[2] == 'o'){
            cout << "M";
        }
        else if(c[0] == '*' && c[1] == 'o' && name[1][f] == '*'){
            cout << "N";
        }
        else if(c[0] == '*' && c[1] == 'o' && name[1][f] == 'o'){
            cout << "X";
        }
    }
}
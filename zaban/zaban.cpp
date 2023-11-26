#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(){
    char name[50];
    int n, i, answer;
    
    answer = 1;
    cin >> name;
    n  = strlen(name);
    for (i = 0; i < n ; i++){
        if(name[i] == 'T' || name[i] == 'D' || name[i] == 'L' || name[i] == 'F'){
            answer = answer * 2;
        }
    }
    cout << answer;
    
}
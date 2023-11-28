#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
void my_even(int);


int main(){
    int x;
    cin >> x;
    my_even(x);
    
    
}

void my_even(int x){
    if(x % 2 == 0){
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
}
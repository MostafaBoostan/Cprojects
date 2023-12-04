#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(){
    int x[4],a = 0,b = 0,c = 0,d = 0;
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    while(x[0] && x[2]){
        a++;
        x[0]--;
        if(x[0] == 0)
            break;
        b++;
        x[2]--;
        if(x[2] == 0)
            break;
        c++;
        x[0]--;
        if(x[0] == 0)
            break;
        d++;
        x[2]--;
        if(x[2] == 0)
            break;
    }
    cout << a << " " << b << " " << c << " " << d;
}
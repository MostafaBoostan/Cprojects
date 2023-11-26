#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(){
    int n, m, i, l , number;
    number = 0;
    cin >> n >> m;
    int map[n][m];
    for(i = 0; i < n; i++){
        for(l = 0; l < m; l++){
            cin >> map[i][l];
        }
    }
    for(i = 1; i < n-1; i++){
        for(l = 1; l < m-1; l++){
            if(map[i][l]>map[i][l+1] && map[i][l]>map[i][l-1] && map[i][l]<map[i+1][l] && map[i][l]<map[i-1][l]){
                number++;
            }
            else if(map[i][l]<map[i][l+1] && map[i][l]<map[i][l-1] && map[i][l]>map[i+1][l] && map[i][l]>map[i-1][l]){
                number++;
            }
        }
    }
    printf("%d",number);
}
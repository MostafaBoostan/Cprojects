#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

void rshift (char*, char*);
void lshift (char*, char*);
void jam (char*, char*);
void zarb (char*, char*);
void menha (char*, char*);


int main(){
    char *x, y[1000000] , temp[1000000];
    int i, j;
    cin >> y >> temp;
    x = (char *) malloc(sizeof(temp) + 1);
    strcpy(x , temp);
    while(x[0] != 'x'){
        if(x[0] == '>'){
            rshift(x ,&y[0]);
        }
        else if(x[0] == '<'){
            lshift(x ,&y[0]);
        }
        else if(x[0] == '+'){
            jam(x ,&y[0]);
        }
        else if(x[0] == '*'){
            zarb(x ,&y[0]);
        }
        else if(x[0] == '-'){
            menha(x ,&y[0]);
        }
        free(x);
        cin >> temp;
        x = (char *) malloc(sizeof(temp) + 1);
        strcpy(x , temp);
    }
}

void rshift (char* x, char* y){
    int i, j , z = 0;
    char temp;
    for(i = 1; x[i]; i++){
        z = z * 10 + x[i] - '0';
    }
    for(i = 0; i < z; i++){
        j = strlen(y);
        j--;
        temp = y[j];
        for(j--; j >= 0; j--){
            y[j + 1] = y[j];
        }
        y[0] = temp;
    }
    cout << y << "\n";
}

void lshift (char* x, char* y){
    int i, j , t, z = 0;
    char temp;
    for(i = 1; x[i]; i++){
        z = z * 10 + x[i] - '0';
    }
    for(i = 0; i < z; i++){
        j = strlen(y);
        j--;
        temp = y[0];
        for(t = 0; t < j; t++){
            y[t] = y[t + 1];
        }
        y[j] = temp;
    }
    cout << y << "\n";
}

void jam (char* x, char* y){
    int i, j, t;
    i = strlen(x) - 1;
    t = strlen(y);
    for(j = 1; j <= i; j++){
        y[t] = x[j];
        t++;
    }
    y[t] = 0;
    cout << y << "\n";
}

void zarb (char* x, char* y){
    int i,j,t = 1,z , a = 0;
    char temp[1024];
    z = i = strlen(y);
    strncpy(temp,y,i);
    for(i = 1; x[i]; i++){
        a = a * 10 + x[i] - '0';
    }
    for(x[1] -= '0'; t < a; t++){
        j = strlen(y);
        for(i = 0; i < z; i++){
            y[j] = temp [i];
            j++;
        }
        y[j] = 0;
    }
    cout << y << "\n";
}

void menha (char* x, char* y){
    int i,j,flag = 1,temp;
    for(j = 0; y[j]; j++){
        temp = j;
        for(i = 1; x[i]; i++){
            flag = 0;
            if(x[i] != y[j]){
                flag = 1;
                break;
            }
            j++;
        }
        if(flag == 0){
            temp = strlen(x) - 1; 
            while(y[j]){
                y[j - temp] = y[j];
                j++;
            }
            y[j - temp] = 0;
            break;
        }
        j = temp;
    }
    cout << y << "\n";

}

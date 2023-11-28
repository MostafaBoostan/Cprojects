#include <stdio.h>
#include <math.h>
#include <string.h>

void str(char string[]);

int main(){
    char x[100];
    scanf("%s",& x);
    str(x);
    
    
}

void str(char string[]){

    int n, i, l;
    l  = 0;
    n = strlen(string);
    char string2[100];

    for(i = n - 1; i >= 0; i--){
        string2[l] = string[i];
        l++;
    }  
    string2[l] = 0;

    for(i = 0 ; i < l; i++){
        if(string[i] != string2[i]){
            break;
        }
    }
    if(i == l){
        printf("Yes");
    }
    else{
        printf("No");
    }


    
}

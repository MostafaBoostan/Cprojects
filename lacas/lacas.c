#include <stdio.h>
#include <math.h>

int main() {
    int x[100000], y[100000], i = 0, j, t , temp , flag = 1;
    
    while(1){
        scanf("%d",&x[i]);
        if(x[i] == -1){
            break;
        }
        scanf("%d",&y[i]);
        i++;
    }
    for(j = 0; j < i; j++){
        for(t = j + 1; t < i; t++){
            if(y[j] > y[t]){
                temp = y[j];
                y[j] = y[t];
                y[t] = temp;
                temp = x[j];
                x[j] = x[t];
                x[t] = temp;
            }
        }
    }
    j = 0;
    if(y[0] == y[1]){
        while(flag == 1){
            flag = 0;
            while(j < i - 1 && y[j] == y[j+1]){
                flag = 1;
                j++;
            }
            j++;
        }
        j--;
    }
    t = j;
    if(j == i){
        printf("no one won.");
    }
    else {
        for(j = 0; j < i; j++){
            if(x[t] == x[j] && t != j){
                break;
            }
        }
        if(j == i){
            printf("%d won.",x[t]);
        }
        else{
            printf("%d cheated.",x[t]);
        }
    }
    



}




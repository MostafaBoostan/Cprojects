#include <stdio.h>
#include <math.h>


void sum (char*, char*);

int main(){

    char* x;
    char* y;
    x = (char*) malloc(1000 * sizeof(char));
    y = (char*) malloc(1000 * sizeof(char));
    scanf("%s", x);
    scanf("%s", y);
    sum(x,y);

    
    
}

void sum (char* x, char* y){
    int i ,j, t;
    char temp;
    char* sum = (char*) malloc(1000 * sizeof(char));
    for(i = 0; x[i]; i++);
    for(j = 0; y[j]; j++);
    if(j > i){
        t = j;
        sum[j+1] = 0;
        while(i >= 0){
            y[j] = y[j] - '0';
            x[i] = x[i] - '0';

            if((sum [j+1] + x[i] + y[j]) >= 10){
                sum[j+1] = ((sum[j+1] + x[i] + y[j]) % 10) + '0';
                sum[j] = 1;
                j--;
                i--;
            }
            else{
                sum[j+1] = sum[j+1] + y[j] + x[i] + '0';
                sum[j] = 0;
                j--;
                i--;
            }
        }
        while(j >= 0){
            y[j] = y[j] - '0';
            if(sum [j+1]+ y[j] >= 10){
                sum[j+1] = (((sum[j+1] + y[j])) % 10) + '0';
                sum[j] = 1;
                j--;
            }
            else{
                sum[j+1] = sum[j+1] + y[j] + '0';
                sum[j] = 0;
                j--;
            }
        }
        if(sum[0] == 0){
            for(i = 1; i <= t; i++){
                printf("%c",sum[i]);
            }
        }
        else{
            sum[0] = sum[0] +  '0';
            for(i = 0; i <= t; i++){
                printf("%c",sum[i]);
            }
        }
    }
    else{
        t = i;
        sum[i+1] = 0;
        while(j >= 0){
            y[j] = y[j] - '0';
            x[i] = x[i] - '0';

            if((sum [i+1] + x[i] + y[j]) >= 10){
                sum[i+1] = ((sum[i+1] + x[i] + y[j]) % 10) + '0';
                sum[i] = 1;
                j--;
                i--;
            }
            else{
                sum[i+1] = sum[i+1] + y[j] + x[i] + '0';
                sum[i] = 0;
                j--;
                i--;
            }
        }
        while(i >= 0){
            x[i] = x[i] - '0';
            if(sum [i+1]+ x[i] >= 10){
                sum[i+1] = (((sum[i+1] + x[i])) % 10) + '0';
                sum[i] = 1;
                i--;
            }
            else{
                sum[i+1] = sum[i+1] + x[i] + '0';
                sum[i] = 0;
                i--;
            }
        }
        if(sum[0] == 0){
            for(i = 1; i <= t; i++){
                printf("%c",sum[i]);
            }
        }
        else{
            sum[0] = sum[0] +  '0';
            for(i = 0; i <= t; i++){
                printf("%c",sum[i]);
            }
        }
    }


}
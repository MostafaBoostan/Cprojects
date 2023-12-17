#include <stdio.h>
#include <math.h>
int sum(int);
int aval(int);
int mohasebe(int,int,int);

int main() {
    int t,i , summ, avalm, mohasebem, j;
    scanf("%d",&t);
    int x[t];
    for(i = 0; i < t; i++){
        scanf("%d",&x[i]);
    }
    for(i = 0; i < t; i++){
        for(j = 2; j < x[i]; j++){
            summ = sum(j);
            avalm = aval(j);
            mohasebem = mohasebe(j, summ, avalm);
            if(mohasebem == x[i]){
                printf("Yes\n");
                break;
            }
        }
        if(j == x[i]){
            printf("No\n");
        }
    }
}

int sum(int x){
    int sum = 0;
    for(; x; x /= 10){
        sum = sum + x % 10;
    }
    return sum;
}

int aval(int x){
    int i = 2, sum = 0, flag = 0;
    while(x != 1){
        if(x % i == 0){
            x /= i;
            if(flag == 0){
                sum = sum + i;
            }
            flag = 1;
        }
        else{
            i++;
            flag = 0;
        }   
    }
    return sum;
}

int mohasebe(int x, int sum, int aval){
    return x + sum + aval;
}


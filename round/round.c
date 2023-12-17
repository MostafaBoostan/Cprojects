#include <stdio.h>
#include <math.h>

int round1(char n[], int, int);
int round2(char x[]);
int main() {
    int n,i,j,k,rd1=0,rd2=0;
    scanf("%d",&n);
    char x[n][10];
    for(i=0;i<n;i++){
        scanf("%s",x[i]);
    }
    for(k=0;k<n;k++){
        rd1=0;
        rd2=0;
        for(i=0;i<=7;i++){
            for(j=i+1;j<=9;j++){
                if(x[k][i] == x[k][j]){
                    if((j-i)%2==0){
                        rd1=round1(x[k],i,j);
                        break;
                    }
                }
            }
            if(rd1==1){
                break;
            }
        }
        rd2=round2(x[k]);
        if(rd1+rd2==2){
            printf("superrond\n");
        }
        else if(rd1+rd2){
            printf("rond\n");
        }
        else{
            printf("notrond\n");
        }
    }
}



int round1(char n[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (n[start] != n[end]) {
        return 0;
    }
    return round1(n, start + 1, end - 1);
}


int round2(char x[]){
    int counter,i,l;
    for(counter=0;counter<=9;counter++){
        l=0;
        for(i=0;i<=9;i++){
            if(counter==x[i]-'0'){
                l++;
            }
            if(l>=4){
               return 1;
            }
        }
    }
    return 0;
}
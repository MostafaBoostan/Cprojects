#include <stdio.h>
#include <math.h>


int main(){
    int n, i , x, flag;
    flag = 1;
    scanf("%d",& n);
    if(n != 0){
        int array[n];
        for(i = 0 ; n > i ; i++){
            scanf("%d",& array[i] );
        }
        n = n - 1;
        while(flag == 1){
            flag = 0;
            for(i = 0; n > i ; i++){
                if(array[i] > array[i+1]){
                    x = array[i];
                    array[i] = array[i+1];
                    array[i+1] = x;
                    flag = 1;
                }
            }
        }
        for(i = 0 ; n >= i ; i++){
            printf("%d ", array[i]);
        }
    }   
    else
        printf("error"); 
        
}
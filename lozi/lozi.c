#include <stdio.h>
#include <math.h>


int main(){
    int n, save , i, l, f;
    i = 0;
    scanf("%d",& n);
    save = 1;
    l = n ;
    f = n;
    n = n * 2 + 1;
    while(n > save){
        for(i = l ; i > 0 ; i--){
            printf(" ");
        }
        l--;
        for(i = save ; i > 0 ; i--){
            printf("*");
        }

        printf("\n");
        save = save + 2;
            
    }

    for(i = save ; i > 0 ; i--){
            printf("*");
    }
    printf("\n");
    n = n - 2;
    save = save - 2;
    n = 2 * f - 1;
    f = 1;
    
    while(n > 0){
        for(i = f ; i > 0 ; i--){
            printf(" ");
        }
        f++;
        for(i = n ; i > 0 ; i--){
            printf("*");
        }
        printf("\n");
        n = n - 2;
    }

    

    
}
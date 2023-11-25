#include <stdio.h>
#include <math.h>


int main(){
    int n, i, save, np;

    scanf("%d",& n);

    np = 0;
    i = n;
    save = n;

    while(n > 0){
        np = (np * 10) + (n % 10);
        n = n / 10;
    }

    if(np == save){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    
}
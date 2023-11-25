#include <stdio.h>
#include <math.h>


int main(){
    int x,a,b,c;
    scanf("%x",& x);
    a = x%256;
    x = x/256;
    b = x%256;
    x = x/256;
    c = x;
    

    printf( "RGB(%d, %d, %d)", c,b,a );
}
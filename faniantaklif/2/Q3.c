#include <stdio.h>
#include <math.h>


int main(){
    int n, yekan, dahegan;

    scanf("%d",& n);

    yekan = n % 10;
    n = n / 10;
    dahegan = n % 10;
    n = n / 10;
    n = n * 10 + yekan;
    n = n * 10 + dahegan;

    printf("%d", n);

}
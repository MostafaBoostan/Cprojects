#include <stdio.h>
#include <math.h>
int main(){

int a,b,c,d;
scanf("%d%d",&a,&b);
if(b<a){
    d=b;
    b=a;
    a=d;
}
while(a <= b){
    c= sqrt(a);
    while(c>1){

        if(a%c==0){

            break;
        }
        c--;
    }
    if(c==1){
        printf("%d ",a);

    }
    a++;
}
}
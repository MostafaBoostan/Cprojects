#include <stdio.h>
#include <math.h>
#include <gmp.h>

long long int maghloob(long long int);
int main() {
    long long int y , x;
    scanf("%lld",&x);
    x=x*10+1;
    x= maghloob(x);
    while(x!=1){
        if(x%10>3){
            y=x%100;
            y=maghloob(y);
            if(y/10 == 0){
                y*=10;
            }
            printf("%c",y);
            x/=100;
        }
        else if(x%10==3){
            if(x%100>23){
                y=x%100;
                y=maghloob(y);
                if(y/10 == 0){
                    y*=10;
                }
                printf("%c",y);
                x/=100;
            }
            else{
                y=x%1000;
                y=maghloob(y);
                if(y/100 == 0){
                    if(y/10 == 0){
                        y*=100;
                    }
                    else{
                        y*=10;
                    }  
                }
                printf("%c",y);
                x/=1000;
            }
        }

        else if(x%10<3){ 
            y=x%1000;
            y=maghloob(y);
            if(y/100 == 0){
                if(y/10 == 0){
                    y*=100;
                }
                else{
                    y*=10;
                }  
            }
            printf("%c",y);
            x/=1000;
        }
    }
}
long long int maghloob(long long int x){
    long long int y=0;
    while(x){
       y=(y*10)+(x%10);
       x/=10;
    }
    return y;
}
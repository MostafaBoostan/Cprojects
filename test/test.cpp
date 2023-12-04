#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

void originial(char str[]);
char change(char);

int main() {
   
 int R , L , i;
    char str[1000000];
    originial(str);

    
        cout << str;
    
    return 0;
}


char change(char c){

    if (c=='1') 
        c='0';
    else if(c=='0')
        c='1';
    return c;
}


void originial(char str[]){
    
    
    int x , t , n , y;
    char c;
    str[0]='1';

    

        for (t=0;t<18;t++) {
            x=pow(2,t);
            y=0;
            for (n=pow(2,t);n>0;n--) {
                c=str[y];
                str[x]=change(c);
                x++;
                y++;
                str[x] = 0;
            }
        }


}
#include <stdio.h>
#include <math.h>


int main(){
    float a, b, c, d, e, ave;
    scanf("%f%f%f%f%f",& a,& b,& c,& d,& e);
    ave = (a + b + c + d + e) / 5 * 100 / 20;
    
    printf("Percentage = %f\n", ave);

    if(ave >= 90)
        printf("Grade A");

    else if(ave >= 80)
        printf("Grade B");

    else if(ave >= 70)
        printf("Grade C");

    else if(ave >= 60)
        printf("Grade D");

    else if(ave >= 40)
        printf("Grade E");

    else
        printf("Grade F");


}
#include <stdio.h>
#include <math.h>


int main(){
    float x, y, z, max, co[2];
    scanf("%f%f%f",& x,& y,& z);
    if(x < y){
        max = y;
        y = x;
        x = max;
    }

    if(x < z){
        max = z;
        z = x;
        x = max;
    }

    if(y < z){
        max = z;
        z = y;
        y = max;
    }

    co[0] = (x*x + y*y - z*z) / (2 * x * y);
    co[0] = acos(co[0]);
    co[0] = co[0] * 180 / 3.141592;

    co[1] = (x*x + z*z - y*y) / (2 * x * z);
    co[1] = acos(co[1]);
    co[1] = co[1] * 180 / 3.141592;

    co[2] = (z*z + y*y - x*x) / (2 * z * y);
    co[2] = acos(co[2]);
    co[2] = co[2] * 180 / 3.141592;

    printf("%.2f %.2f %.2f", co[0], co[1], co[2]);
}
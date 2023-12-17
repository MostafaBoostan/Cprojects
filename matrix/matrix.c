#include <stdio.h>
#include <math.h>

void matrixInput(int *mat , int len) ; 
void matrixMultiply(int *matA, int *matB, int *res ,int len) ;
void matrixPrint(int *mat , int len) ;

int main() {
    int len;
    scanf("%d",& len);
    int m[len][len], n[len][len],res[len][len];
    matrixInput(& m[0][0], len);
    matrixInput(& n[0][0], len);
    matrixMultiply(& m[0][0],& n[0][0],&res[0][0] ,len);
    matrixPrint(& res[0][0], len);
}

void matrixInput(int *mat , int len) {
    int i;
    len = len * len;
    for(i = 0; i < len; i++){
        scanf("%d", (mat + i));
    }
}
      
void matrixMultiply(int *matA, int *matB, int *res ,int len){
    int i , j , t;
    for(i = 0; i < len*len; i++){
        *(res + i) = 0;
    }
    for(j = 0; j < len; j++){
        for(t = 0; t < len; t++){
            for(i = 0; i < len; i++){
                *(res + (j * len) + t) = *(res + t + (j * len)) + *(matA + i + len * j) * *(matB + t + len * i);
            } 
        }     
    }
    
}

void matrixPrint(int *mat , int len){
    int i, j ,t = 0;

    for(j = 0; j < len; j++){
        for(i = 0; i < len ; i++){
            printf("%d ",*(mat + t));
            t++;
        }
        printf("\n");
    }    

}
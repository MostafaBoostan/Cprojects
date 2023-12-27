#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

struct matrix {
    int line , column;
    int** p;
};

void input (matrix*);
void addition (matrix*, matrix*);
void subtract (matrix*, matrix*);
void freeMatrix (matrix*, matrix*);

int main(){
    struct matrix x, y;
    struct matrix* a;
    struct matrix* b;
    a = &x;
    b = &y;
    char question[100];
    cin >> (a -> line) >> (a -> column);
    input(a);
    
    cin >> b -> line >> b -> column;
    input(b);

    scanf("%s",question);
    if(question[0] == 'a'){
        addition(a, b);
        freeMatrix(a , b);
    }
    else if(question[0] == 's'){
        subtract(a, b);
        freeMatrix(a , b);
    }

}

void input(matrix* p){
    int i,j;
    p -> p = (int**) malloc (p -> line  * sizeof(int*));
    for(i = 0; i < p -> line; i++){
        p -> p[i] = (int*) malloc (p -> column * sizeof(int));
        for(j = 0; j < p -> column; j++){
            cin >> p -> p[i][j];
        }
    }
}

void addition (matrix* a, matrix* b){
    int i , j;
    for(i = 0; i < a -> line; i++){
        for(j = 0; j < a -> column; j++){
            a -> p[i][j] = a -> p[i][j] + b -> p[i][j];
        }
    }
    
    for(i = 0; i < a -> line; i++){
        for(j = 0; j < a -> column; j++){
            cout << a -> p[i][j] << " ";
        }
        cout << "\n";
    }
}

void subtract (matrix* a, matrix* b){
    int i , j;
    for(i = 0; i < a -> line; i++){
        for(j = 0; j < a -> column; j++){
            a -> p[i][j] = a -> p[i][j] - b -> p[i][j];
        }
    }

    for(i = 0; i < a -> line; i++){
        for(j = 0; j < a -> column; j++){
            cout << a -> p[i][j] << " ";
        }
        cout << "\n";
    }
}

void freeMatrix (matrix* a, matrix* b){
    int j;
    for(j = 0; j < a -> line; j++){
        free (a->p[j]);
        free (b->p[j]);
    }
    free(a->p);
    free(b->p);
}
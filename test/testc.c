
#include <stdio.h> 

int f1(int n, int *score) 
{ 
    *score += n; 
    return *score; 
} 
void f2(int n, int *score) 
{ 
    *score -= n; 
    return; 
} 
int f3(int n, int score) 
{ 
    score = n; 
} 

int f4(int n, int *score){ 
    *score -= 1; 
} 

int main() 
{ 
    int score = 7,y; 
    f2(10, &score); 
    y = f1(5, &score); 
    f3(12, score); 
    f4(2, &score); 
    
}



#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main(){
    int n, i, grade[3], change;
    char answer;
    char name1[14] = "keyvoon";
    char name2[14] = "nezam";
    char name3[14] = "shir farhad";
    cin >> n;
    char exam[n];
    cin >> exam;
    grade[0] = 0;
    grade[1] = 0;
    grade[2] = 0;


    for(i = 0; i < n; i++){
        if(i % 6 == 0 || i % 6 == 1)
            answer = '3';
        
        else if(i % 6 == 2 || i % 6 == 3)
            answer = '1';
        
        else if(i % 6 == 4 || i % 6 == 5)
            answer = '2';
        
        if(exam[i] == answer)
            grade[0]++;

    }
    for(i = 0; i < n; i++){
        if(i % 3 == 0)
            answer = '1';
        
        else if(i % 3 == 1)
            answer = '2';
        
        else if(i % 3 == 2)
            answer = '3';
        
        if(exam[i] == answer)
            grade[1]++;

    }
    for(i = 0; i < n; i++){
        if(i % 4 == 0 || i % 4 == 2)
            answer = '2';
        
        else if(i % 4 == 1)
            answer = '1';
        
        else if(i % 4 == 3)
            answer = '3';
        
        if(exam[i] == answer)
            grade[2]++;

    }
    
    if(grade[0] < grade[1]){
        swap(name1 , name2);
        change = grade[0];
        grade[0] = grade[1];
        grade[1] = change;
    }
    if(grade[0] < grade[2]){
        swap(name1 , name3);
        change = grade[0];
        grade[0] = grade[2];
        grade[2] = change;
    }
    if(grade[1] < grade[2]){
        swap(name2 , name3);
        change = grade[1];
        grade[1] = grade[2];
        grade[2] = change;
    }

    cout << grade[0] << "\n";
    cout << name1 ;

    if(grade[0] == grade[1]){
        cout << "\n" << name2;
    }
    if(grade[0] == grade[2]){
        cout << "\n" << name3;
    }
    
    
    
    
}
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int *pferst_number1[5];
      for(int i=0;i<5;i++)
        pferst_number1[i]= (int*) malloc(12 * sizeof(int));

      *pferst_number1[0]= 11564654654654654652;

      cout<<*pferst_number1[0];

}
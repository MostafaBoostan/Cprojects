#include <iostream>
using namespace std;
long long int factorial(long long int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    long long int n;
    cin >> n;

    for (long long int i = 0; i < n; i++) {
        
        for (long long int j = 0; j <= i; j++)
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        cout << "\n";
    }

}
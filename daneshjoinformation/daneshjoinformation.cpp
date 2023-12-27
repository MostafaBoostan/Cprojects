#include <iostream>
#include <cstring>

using namespace std;

struct inf {
    char* name, *last;
    int number;
};

int main() {
    int n, i, t, j;
    char shart[100];
    cin >> n;
    struct inf std[n]; 
    struct inf* pstd[n];
    struct inf* ptemp;

    for (i = 0; i < n; i++) {
        pstd[i] = &std[i];
    }

    for (i = 0; i < n; i++) {
        cin >> t;
        std[i].name = (char*)malloc(t * sizeof(char) + 1);
        cin.ignore();
        cin.getline(std[i].name, t + 1);
        
        cin >> t;
        std[i].last = (char*)malloc(t * sizeof(char) + 1);
        cin.ignore();
        cin.getline(std[i].last, t + 1);

        cin >> t;
        std[i].number = t;
    }

    cin >> shart;

    if (shart[7] == 'm') {
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (strcmp(pstd[i] -> name, pstd[j] -> name) > 0) {
                    ptemp = pstd[i];
                    pstd[i] = pstd[j];
                    pstd[j] = ptemp;
                }
            }
        }
    }
    else if (shart[7] == 's') {
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (strcmp(pstd[i] -> last, pstd[j] -> last) > 0) {
                    ptemp = pstd[i];
                    pstd[i] = pstd[j];
                    pstd[j] = ptemp;
                }
            }
        }
    }
    else {
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (pstd[i] -> number > pstd[j] -> number) {
                    ptemp = pstd[i];
                    pstd[i] = pstd[j];
                    pstd[j] = ptemp;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        cout << pstd[i]->name << "\n";
        cout << pstd[i]->last << "\n";
        cout << pstd[i]->number << "\n";
    }

}

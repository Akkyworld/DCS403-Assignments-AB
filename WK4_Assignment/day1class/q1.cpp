//Randomly genenrate 6 distinct numbers for a lottery using arrays use srand function for no duplication

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int lotto[6];
    int i;
    srand(time(0));
    for (i = 0; i < 6; i++) {
        lotto[i] = rand() % 49 + 1;
        for (int j = 0; j < i; j++) {
            if (lotto[i] == lotto[j]) {
                i--;
                break;
            }
        }
    }
    for (i = 0; i < 6; i++) {
        cout << lotto[i] << " ";
    }
    cout << endl;
    return 0;
    }
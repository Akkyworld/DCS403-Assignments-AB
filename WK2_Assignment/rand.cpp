//randomly display uppercase letters
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    char ch = 'A' +rand() % 26;
    cout << ch << endl;
    return 0;
}
// random number and range
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int random_number = rand() % 100 + 1;
    cout << "The random number is: " << random_number << endl;
    return 0;
}
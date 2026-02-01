//simulate shuffling cards and dealing cards using arrays
#include <iostream>
using namespace std;
int main(){
    int deck[52];
    for (int i = 0; i < 52; i++){
        deck[i] = i;
    }
    for (int i = 0; i < 52; i++){
        int j = rand() % 52;
        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
    for (int i = 0; i < 52; i++){
        cout << deck[i] << " ";
    }
    cout << endl;
    return 0;
}
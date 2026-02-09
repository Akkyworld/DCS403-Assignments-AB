/* #include <iostream>
using namespace std;

long long factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
 */

// Sum upto series
/* #include <iostream>
using namespace std;

int sumUpto(int n){
    if (n<=1){
        return n;
    }
    return n + sumUpto(n-1);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of series upto " << num << " is " << sumUpto(num) << endl;
    return 0;
} */
//fibonachi series
/* #include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Fibonacci series up to " << num << " terms: ";
    for (int i = 0; i < num; i++) {
        cout << fib(i) << " ";
    }
    return 0;
} */

// Towers of Hanoi
 /* #include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int num;
    cout << "Enter the number of disks: ";
    cin >> num;
    towerOfHanoi(num, 'A', 'B', 'C');
    return 0;
} */

// Eight Queens
#include <iostream>
using namespace std;

bool isSafe(int board[8][8], int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j < 8; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    return true;
}

void printSolution(int board[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void solveNQueens(int board[8][8], int col) {
    if (col == 8) {
        printSolution(board);
        return;
    }
    for (int i = 0; i < 8; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            solveNQueens(board, col + 1);
            board[i][col] = 0;
        }
    }
}

int main() {
    int board[8][8] = {0};
    solveNQueens(board, 0);
    return 0;
}

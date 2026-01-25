//// write a while loop to ask input a number, and add from 1 to that number
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int i =1;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
} */

// write a do-while loop to ask input a number, and add from 1 to that number
/* #include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= num);
    cout << "The sum is: " << sum << endl;
    return 0;
} */

//// write a for loop to ask input a number, and add from 1 to that number
/* #include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}

 */

 //nested for loop for 2D array 1-3
/* #include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
} */

//break
/* #include <iostream>
using namespace std;
int main(){
    int i ;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) break;
    }
    cout << i << "";
    return 0;
} */

// using while loop for detecting sentinel values
/* #include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    int i = 1;
    while (i <= num) {
        sum += i;
        i++;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
} */
//detect palindrome using loop only for numbers

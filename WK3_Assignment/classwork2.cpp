#include <iostream>
using namespace std;
int globalcount=0;
void showcounter() {
    int localcount=0;
    static int count=0;
    localcount++;
    count++;
    globalcount++;
    cout << "localcount: " << localcount << endl;
    cout << "static count: " << count << endl;
    cout << "globalcount: " << globalcount << endl;

}
int main() {
    showcounter();
    showcounter();
    showcounter();
    return 0;
}
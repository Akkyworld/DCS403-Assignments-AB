
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    bool found = false;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "The number " << target << " is found in the array." << endl;
    }
    else
    {
        cout << "The number " << target << " is not found in the array." << endl;
    }
    return 0;
}
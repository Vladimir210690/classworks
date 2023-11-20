#include <iostream>

using namespace std;

int main() {

    int max = 0;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    for (int i = 1; i < 12; i++) {
        if (arr[i] > arr[max]) {
            max = i;
        }
    }

    cout << "Maximum element is " << arr[max] << " at index " << max << endl;

    return 0;
}
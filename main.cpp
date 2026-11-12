#include <iostream>

using namespace std;

int main() {
    int tmp;
    int arr[] = {3, 2, 5, 1, 2, 9, 5, 7};

    for (int i = 1; i < 8; i++) {
        if (arr[i-1] > arr[i]) {
            tmp = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = tmp;
        }
    }
    for (int p: arr) {
        cout << p << " ";
    }
}

#include <iostream>

using namespace std;

int main() {
    int tmp, n;
    int arr[] = {3, 2, 5, 1, 2, 9, 5, 7};

    for (int j = 0; j < 7; j++) {
        n = 0;
        for (int i = 1; i < 8-j; i++) {
            if (arr[i-1] > arr[i]) {
                tmp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = tmp;
                n++;
            }
        }
        if (n == 0) break;
    }
    for (int p: arr) {
        cout << p << " ";
    }
}

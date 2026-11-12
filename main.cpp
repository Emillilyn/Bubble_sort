#include <iostream>
#include <vector>

#include "unique.h"
#include "reverse.h"

using namespace std;

static void print(const string& label, const vector<int>& v) {
    cout << label;
    for (int p : v) cout << p << " ";
    cout << "\n";
}

int main() {
    vector<int> arr = {3, 2, 5, 1, 2, 9, 5, 7};
    const int size = static_cast<int>(arr.size());

    // bubble sort
    for (int j = 0; j < size - 1; j++) {
        int n = 0;
        for (int i = 1; i < size - j; i++) {
            if (arr[i - 1] > arr[i]) {
                swap(arr[i - 1], arr[i]);
                n++;
            }
        }
        if (n == 0) break;
    }
    print("sorted:   ", arr);

    Unique u(arr);
    u.remove_duplicates();
    print("unique:   ", u.data());

    Reverse r(u.data());
    r.reverse_order();
    print("reversed: ", r.data());
}
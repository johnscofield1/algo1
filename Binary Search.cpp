#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int a[], int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (x == a[mid]) {
        return mid;
    } else if (x < a[mid]) {
        return binarySearchRecursive(a, low, mid - 1, x);
    } else {
        return binarySearchRecursive(a, mid + 1, high, x);
    }
}

int main() {
    int a[] = {1, 3, 5, 7, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int result = binarySearchRecursive(a, 0, n - 1, 7);

    if (result == -1) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index " << result << "." << endl;
    }

    return 0;
}

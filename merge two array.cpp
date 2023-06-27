#include<bits/stdc++.h>
using namespace std;

int Merge(int A[], int B[], int n, int m) {
    int C[n + m];

    int i = 0, j = 0, k = 0;

    while (i <= n - 1 && j <= m - 1) {
        if (A[i] > B[j]) {
            C[k++] = B[j++];
        } else {
            C[k++] = A[i++];
        }
    }

    while (i <= n - 1) {
        C[k++] = A[i++];
    }

    while (j <= m - 1) {
        C[k++] = B[j++];
    }

    cout << "Merged array: ";
    for (int idx = 0; idx < k; idx++) {
        cout << C[idx] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8, 10};
    Merge(A, B, 5, 5);

    return 0;
}


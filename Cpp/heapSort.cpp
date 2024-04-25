#include<bits/stdc++.h>
using namespace std;

void heapify(int a[], int k, int n) {
    if (k <= n/2-1) {
        int j = 2*k + 1;
        if (j < n-1 && a[j] < a[j+1]) 
            ++j;
        if (a[k] < a[j]) {
            int temp = a[k];
            a[k] = a[j];
            a[j] = temp;
            heapify(a, j, n);
        }
    }
}

void firstLine(int a[], int n) {
    for (int i = n/2-1; i >= 0; --i )
        heapify(a, i, n);
}

void heapSort(int a[], int n) {
    firstLine(a, n);
    for (int i = n; i >= 2; --i) {
        int temp = a[0];
        a[0] = a[i-1];
        a[i-1] = temp;
        heapify(a, 0, n-1);
    }
}

int main() {
    int a[] = {34, 14, 24, 54, 84, 64, 94, 74, 4};
    int n = sizeof(a)/sizeof(a[0]);
    heapSort(a, n);
    for (int i: a) cout << i << " ";
}
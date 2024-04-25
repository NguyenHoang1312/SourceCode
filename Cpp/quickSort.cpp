#include<bits/stdc++.h>
using namespace std;

void quickSort(int a[], int left, int right) {
    if (left < right) {
        int k = (left + right)/2;
        int t = a[k];
        int i = left, j = right;
        do {
            while (a[i] < t) ++i;
            while (a[j] > t) --j;
            if (i <= j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                ++i; --j;
            }
        } while (i <= j);
        quickSort(a, left, j);
        quickSort(a, i, right);
    }
}

int main() {
    int a[] = {1, 10, 9, 2, 3, 8, 7, 4, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a, 0, n-1);
    for (int i: a) cout << i << " ";
}
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int x[], int n) {
    for (int i = 1; i < n; ++i) {
        int temp = x[i];
        int j = i-1;
        while (j > -1 && x[j] < temp) {
            x[j+1] = x[j];
            --j;
        }
        x[j+1] = temp;
    }
}

int main() {
    int a[] = {34, 14, 24, 54, 84, 64, 94, 74, 4};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Day truoc khi sap xep: ";
    for (int i = 0; i < n; ++i) 
        cout << a[i] << " ";
    
    insertionSort(a, n);
    cout << "\n\nDay sau khi sap xep: ";
    for (int i = 0; i < n; ++i) 
        cout << a[i] << " ";
}
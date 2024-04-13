#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int x[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = n-1; j > i; --j) {
            if (x[j] > x[j-1]) {
                int temp = x[j];
                x[j] = x[j-1];
                x[j-1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {34, 74, 94, 84, 54, 24};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Day truoc khi sap xep: ";
    for (int i = 0; i < n; ++i) 
        cout << a[i] << " ";
    
    bubbleSort(a, n);
    cout << "\nDay sau khi sap xep: ";
    for (int i = 0; i < n; ++i) 
        cout << a[i] << " ";
}
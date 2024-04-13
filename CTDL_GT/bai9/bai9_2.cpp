#include<bits/stdc++.h>
using namespace std;

void selectionSort(int x[], int n) {
    for (int i = 0; i < n-1; ++i) {
        int m = i;
        for (int j = i+1; j < n; ++j)
            if (x[j] > x[m])
                m = j;
        int temp = x[m];
        x[m] = x[i];
        x[i] = temp; 
    }
}

int main() {
    int a[] = {50, 8, 34, 6, 98, 17, 83, 25, 66, 42, 21, 59, 63, 71, 85};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Day truoc khi sap xep: ";
    for (int i = 0; i < n; ++i) 
        cout << a[i] << " ";
    
    selectionSort(a, n);
    cout << "\nDay sau khi sap xep: ";
    for (int i = 0; i < n; ++i) 
        cout << a[i] << " ";
}
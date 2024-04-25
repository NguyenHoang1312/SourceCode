#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int sa, int b[], int sb, int c[]) {
    int i = 0; j = 0; k = 0;
    while (i < sa && j < sb) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            ++k; ++i;
        }
        else {
            c[k] = b[j];
            ++j; ++k;
        }
    }
    while (i < sa) {
        c[k] = a[i];
        ++k; ++i;
    }
    while (j < sb) {
        c[k] = b[j];
        ++k; ++j;
    }
}

void mergeSort(int a[], int left, right) {
    int mid = (left + right)/2;
    int k = 0;
}
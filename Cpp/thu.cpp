#include<iostream>

int main() {
    int *a, n;
    std::cin >> n;
    a = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    for (int i = n-1; i >= 0; --i)
        std::cout << a[i] << " ";
    delete[] a;
}
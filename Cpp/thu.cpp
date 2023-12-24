#include<bits/stdc++.h>

bool isPrime(int number) {
    for (int i = 2; i*i <= number; ++i)
        if (number % i == 0) return false;
    return number > 1;
}

int main() {
    int n;
    std::cout << "Nhap so tu nhien n: ";
    std::cin >> n;
    std::cout << (isPrime(n)?:"La so nguyen to!":"Khong phai so nguyen to!");
}

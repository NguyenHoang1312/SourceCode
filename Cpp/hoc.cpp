#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

void TowerOfHanoi(int n, char a, char b, char c) {
    if (n == 1)
        cout << "Move one plate " << a << " -> " << c << endl;
    else {
        TowerOfHanoi(n-1, a, c, b);
        TowerOfHanoi(1, a, b, c);
        TowerOfHanoi(n-1, b, a, c);
    }
}

int main() {
    TowerOfHanoi(5, '1', '2', '3');
    Beep((500, 500))
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    for (float i = 1.5; i >= -1.5; i -= 0.1) {
        for (float j = -1.5; j <= 1.5; j += 0.05) {
            float a = i*i + j*j - 1;
            if (a*a*a <= i*i*i*j*j) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
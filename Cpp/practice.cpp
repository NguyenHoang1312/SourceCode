#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int n, test;
    cin >> test;
    while(test--) {
        cin >> n;
        if (n%2 == 0) cout << 9*pow(10, n/2) << endl;
        else cout << 10*pow(10, (n-1)/2) << endl;
    }
}
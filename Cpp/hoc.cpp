#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main() {
    ios 
    ll *a, n, k;
    cin >> n >> k;
    a = new ll[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    ll p = 0 , q = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i] + a[j] == 2*k) {
                p = a[i]; q = a[j];
                break;
            }
        }
    }
    cout << p << " " << q;
}
#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

bool isPrime(ll number) {
    for (ll i = 2; i*i <= number; ++i)
        if (number % i == 0) return false;
    return number > 1;
} 

int main() {
    // ios 
    ll n, m, u, v, sum;
    cin >> n >> m;

    ll a[n], b[n];
    memset(b, 0, sizeof(b));

    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    b[0] = a[0];
    for (ll i = 1; i < n; ++i)
        b[i] = b[i-1] + a[i];

    while (m--) {
        cin >> u >> v;
        sum = b[v-1] - b[u-1] + a[u-1];
        if (isPrime(sum)) cout << "1\n";
        else cout << "0\n";
    }
}
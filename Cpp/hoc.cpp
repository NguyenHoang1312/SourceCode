#include<bits/stdc++.h>
#define ll long long
using namespace std;

int lastDigit(ll n) {
    if (n <= 2) return 1;
    ll a, b, temp;
    a = b = 1;
    while (n--) {
        temp = a%10 + b%10;
        a = b;
        b = temp;
    }
    return b%10;
}

int main()
{
    int n;
    cin >> n;
    cout << lastDigit(n-2);
}

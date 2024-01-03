#include<bits/stdc++.h>
using namespace std;

double f(double x) {
    return 8*x*x*x - 3*x*x - 3;
}

double fdh(double x) {
    return 24*x*x - 6*x;
}

double phi(double x) {
    return pow(0.375 * x*x + 0.375, 0.3333);
}

double x1(double b, double c) {return -0.2*b + 0.1*c + 0.1;}
double x2(double c, double a) {return -0.3*a + 0.1*c + 0.9;}
double x3(double a, double b) {return -0.4*a + 0.3*b + 0.7;}

int main() {
    // double a, b;
    // cin >> a >> b;
    // double m = a - (b-a)*f(a)/(f(b) - f(a));
    // double fm = f(m);
    // double fdhm = fm/fdh(m);
    // cout << "m = " << fixed << setprecision(4) << m << endl;
    // cout << "fm = " <<fixed << setprecision(4) << fm << endl;
    // cout << "f/fdh = " <<fixed << setprecision(4) << fdhm << endl;

    // double x, a, b;
    // cin >> x;
    // cout << "xn = " <<fixed << setprecision(4) << phi(x) << endl;
    // cin >> a >> b;
    // cout << "saiso = " <<fixed << setprecision(4) << 0.9743/(1-0.9743) * fabs(b-a) << endl;

    // double x;
    // cin >> x;
    // cout << "xsau = " <<fixed << setprecision(4) << f(x)/fdh(x) << endl;

    double a, b, c;
    cin >> a >> b >> c;
    cout << "x1 = " <<fixed << setprecision(4) << x1(b, c) << endl;
    cout << "x2 = " <<fixed << setprecision(4) << x2(c, a) << endl;
    cout << "x3 = " <<fixed << setprecision(4) << x3(a, b) << endl;
}
#include<bits/stdc++.h>
// using namespace std;

// double f(double x) {
//     return x*x*x + x - 5;
// }
double f(double x) {
    return pow(x, 4) - 4*x - 1;
}

double dayCung(double a, double b) {
    double x, e = 0.001;
    do {
        x = a - ((b-a)*f(a))/(f(b) - f(a));
        if (f(x)*f(b) < 0) a = x;
        else if (f(x)*f(a) < 0) b = x;
    } while (fabs(b-a) > e);
    return x;
}

// int main() {
//     cout << dayCung(1, 2);
// }

// #include <iostream>
// #include <cmath>



double chord_method(double a, double b, double epsilon) {
    if (f(a)*f(b) >= 0) {
        std::cout << "Phương pháp dây cung không hội tụ." << std::endl;
        return 0;
    }
    if (fabs(f(a)) < fabs(f(b))) {
        std::swap(a, b);
    }
    while (fabs(b-a) >= epsilon) {
        double temp = b;
        b = b - (b-a)*f(b)/(f(b)-f(a));
        a = temp;
    }
    return b;
}

int main() {
    std::cout << dayCung(0, 2) << std::endl;
    return 0;
}

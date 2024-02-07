#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long

struct Station {
    int x, y;
    ll p;
};

double distance(Station a, Station b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    int n;
    std::cin >> n;

    Station list[n];
    for (int i = 0; i < n; ++i)
        std::cin >> list[0].x >> list[0].y >> list[0].p; 

    int count, total = 0;
    for (int i = 0; i < n; ++i) {
        count = 0;
        for (int j = 0; j < n; ++j) {
            int dtc = distance(list[i], list[j]);
            if (dtc <= list[i].p) ++count;
        }
        total = std::max(total, count);
    }
    std::cout << total;
}
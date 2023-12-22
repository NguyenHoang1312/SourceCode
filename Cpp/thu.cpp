#include<bits/stdc++.h>

class HINH {
protected:
    float dai, rong;
public:
    void nhap() {
        do {
            std::cin >> dai >> rong;
        } while (dai <= 0 || rong <= 0);
    }
    void xuat() {
        std::cout << dai << " " << rong << std::endl;
    }
};

class HCN: public HINH {
public:
    void xuat() {
        std::cout << chuVi() << " " << dienTich() << std::endl;
    }
    float chuVi() {
        return (dai + rong) * 2;
    }
    float dienTich() {
        return dai * rong;
    }
};

int main() {
    HCN a;
    a.nhap();
    a.xuat();
    std::cout << a.chuVi() << std::endl;
    std::cout << a.dienTich() << std::endl;
}

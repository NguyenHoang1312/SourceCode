//Nguyễn Bá Hoàng KHMT 02

#include<bits/stdc++.h>
using namespace std;

class Date {
    int day, month, year;
public:
    void nhap();
    void xuat();
};

void Date::nhap() {
    cin >> day >> month >> year;
}
void Date::xuat() {
    printf("%02d/%02d/%d\n", day, month, year);
}

class DiaChi {
    char dienThoai[12];
    char phuong[30];
    char quan[30];
    char thanhPho[30];
public:
    friend class DoanhNghiep;
};

class DoanhNghiep {
    int maDN;
    char tenDN[60];
    Date ngayTL;
    DiaChi diaChi;
    char giamDoc[30];
    long doanhThu;
public:
    void nhap();
    void xuat();
};

void DoanhNghiep::nhap() {
    cout << "Nhap ma doanh nghiep: "; cin >> maDN;
    cout << "Nhap ten doanh nghiep: "; fflush(stdin); gets(tenDN);
    cout << "Nhap ngay thanh lap doanh ngiep: "; ngayTL.nhap();
    cout << "Nhap dia chi doanh nghiep:\n";
    cout << "- Nhap so dien thoai: "; fflush(stdin); gets(diaChi.dienThoai); 
    cout << "- Nhap phuong: "; fflush(stdin); gets(diaChi.phuong); 
    cout << "- Nhap quan: "; fflush(stdin); gets(diaChi.quan); 
    cout << "- Nhap thanh pho: "; fflush(stdin); gets(diaChi.thanhPho);
    cout << "Nhap ten giam doc doanh nghiep: "; fflush(stdin); gets(giamDoc);
    cout << "Nhap doanh thu doanh nghiep: "; cin >> doanhThu;
}
void DoanhNghiep::xuat() {
    cout << "Ma doanh nghiep: " << maDN << endl;
    cout << "Ten doanh nghiep: " << tenDN << endl;
    cout << "Ngay thanh lap doanh ngiep: "; ngayTL.xuat();
    cout << "Dia chi doanh nghiep: " << diaChi.phuong << ", " << diaChi.quan << ", " << diaChi.thanhPho << endl;
    cout << "So dien thoai: " << diaChi.dienThoai << endl; 
    cout << "Ten giam doc doanh nghiep: " << giamDoc << endl;
    cout << "Doanh thu doanh nghiep: " << doanhThu << endl;
}

int main() {
    int n;
    cout << "Nhap so luong doanh nghiep: "; cin >> n;
    DoanhNghiep *dn = new DoanhNghiep[n];
    cout << "Nhap thong tin cac doanh nghiep:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Nhap doanh nghiep thu " << i+1 << ":\n";
        dn[i].nhap();
    } 

    
}


#include<bits/stdc++.h>
using namespace std;

class NHA_CUNG_CAP {
    string maNCC, tenNCC, diaChiNCC;
public:
    void NHAP();
    void XUAT();
};

void NHA_CUNG_CAP::NHAP() {
    cout << "+ Nhap ma nha cung cap: "; getline(cin, maNCC);
    cout << "+ Nhap ten nha cung cap: "; getline(cin, tenNCC);
    cout << "+ Nhap dia chi nha cung cap: "; getline(cin, diaChiNCC);
}

void NHA_CUNG_CAP::XUAT() {
    cout << setw(20) << left << "Ma NCC: " + maNCC;
    cout << setw(20) << left << "Ten NCC: " + tenNCC << endl;
    cout << setw(50) << left << "Dia chi: " + diaChiNCC << endl;
}

class HANG {
    string tenHang;
    long donGia, soLuong;
public:
    long thanhTien();
    void NHAP();
    void XUAT();
    friend class PHIEU;
};

long HANG::thanhTien() {
    return donGia * soLuong;
}

void HANG::NHAP() {
    cout << "+ Nhap ten hang: "; getline(cin, tenHang);
    cout << "+ Nhap don gia: "; cin >> donGia;
    cout << "+ Nhap so luong: "; cin >> soLuong; cin.ignore();
}

void HANG::XUAT() {
    cout << setw(20) << left << tenHang
         << setw(20) << left << donGia
         << setw(20) << left << soLuong;
}

class PHIEU {
    string maPhieu, ngayLapPhieu;
    NHA_CUNG_CAP ncc;
    HANG *danhSach;
    int soLuong;
public:
    void NHAP();
    void XUAT();
};

void PHIEU::NHAP() {
    cout << "Nhap ma phieu: "; cin >> maPhieu;
    cout << "Nhap ngay lap phieu: "; cin >> ngayLapPhieu; cin.ignore();
    cout << "Nhap thong tin nha cung cap:\n";
    ncc.NHAP();
    do {
        cout << "Nhap so luong hang hoa:\n";
        cin >> soLuong;
    } while (soLuong <= 0);
    cin.ignore();
    danhSach = new HANG[soLuong];
    cout << "Nhap danh sach cac hang hoa:\n";
    for (int i = 0; i < soLuong; ++i) {
        cout << "Nhap thong tin don hang thu " << i+1 << ":\n";
        danhSach[i].NHAP();
    }
}

void PHIEU::XUAT() {
    cout << string(28, '=') << "PIHEU NHAP HANG" << string(28, '=') << endl;

    cout << setw(20) << left << "Ma phieu: " + maPhieu;
    cout << setw(20) << left << "Ngay lap: " + ngayLapPhieu << endl;

    ncc.XUAT();

    cout << endl;

    cout << setw(20) << left << "Ten hang"
         << setw(20) << left << "Don gia"
         << setw(20) << left << "So luong"
         << setw(20) << left << "Thanh tien" << endl;

    long tongTien = 0;
    for (int i = 0; i < soLuong; ++i) {
        tongTien += danhSach[i].donGia * danhSach[i].soLuong;
    }

    for (int i = 0; i < soLuong; ++i) {
        danhSach[i].XUAT();
        cout << setw(20) << left << danhSach[i].thanhTien() << endl;
    }

    cout << setw(60) << left << "Cong thanh tien" << tongTien << endl;
    cout << string(69, '=') << endl;
}

int main() {
    PHIEU a;
    a.NHAP();
    a.XUAT();
}
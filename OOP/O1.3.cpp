#include<bits/stdc++.h>
using namespace std;

class PHIEU;

class NHAN_VIEN {
    string tenNV, chucVuNV;
public:
    void NHAP();
    void XUAT();
};

void NHAN_VIEN::NHAP() {
    cout << "+ Nhap ten nhan vien: "; getline(cin, tenNV);
    cout << "+ Nhap chuc vu nhan vien: "; getline(cin, chucVuNV);
}

void NHAN_VIEN::XUAT() {
    cout << setw(40) << left << "Nhan vien kiem ke: " + tenNV;
    cout << setw(20) << left << "Chuc vu: " + chucVuNV << endl;
}

class PHONG {
    string tenPhong, maPhong, truongPhong;
public:
    void NHAP();
    void XUAT();
};

void PHONG::NHAP() {
    cout << "+ Nhap ten phong: "; getline(cin, tenPhong);
    cout << "+ Nhap ma phong: "; getline(cin, maPhong);
    cout << "+ Nhap ten truong phong: "; getline(cin, truongPhong);
}

void PHONG::XUAT() {
    cout << setw(40) << left << "Kiem ke tai phong: " + tenPhong;
    cout << setw(20) << left << "Ma phong: " + maPhong << endl;
    cout << "Truong phong: " + truongPhong << endl;
}

class TAI_SAN {
    string tenTaiSan;
    int soLuong;
    string tinhTrang;
public:
    void NHAP();
    void XUAT();
    friend class PHIEU;
    friend void suaThongTin(PHIEU &phieu);
    friend void sapXepDanhSach(PHIEU &phieu);
};

void TAI_SAN::NHAP() {
    cout << "+ Nhap ten tai san: "; getline(cin, tenTaiSan);
    cout << "+ Nhap so luong: "; cin >> soLuong; cin.ignore();
    cout << "+ Nhap tinh trang: "; getline(cin, tinhTrang);
}

void TAI_SAN::XUAT() {
    cout << "|" << setw(20) << left << tenTaiSan
         << "|" << setw(20) << left << soLuong 
         << "|" << setw(20) << left << tinhTrang 
         << "|" << endl;
}

class PHIEU {
    string maPhieu, ngayKiemKe;
    NHAN_VIEN nhanVien;
    PHONG phong;
    int soLuong;
    TAI_SAN* danhSachTaiSan;
public:
    void NHAP();
    void XUAT();
    friend void suaThongTin(PHIEU &phieu);
    friend void sapXepDanhSach(PHIEU &phieu);
};

void PHIEU::NHAP() {
    cout << "Nhap ma phieu: "; cin >> maPhieu;
    cout << "Nhap ngay kiem ke phieu: "; cin >> ngayKiemKe; cin.ignore();

    nhanVien.NHAP();
    phong.NHAP();

    do {
        cout << "Nhap so luong tai san: ";
        cin >> soLuong;
    } while (soLuong <= 0);
    cin.ignore();

    danhSachTaiSan = new TAI_SAN[soLuong];
    cout << "Nhap danh sach tai san: \n";
    for (int i = 0; i < soLuong; ++i) {
        cout << "Nhap tai sam thu " << i+1 << ":\n";
        danhSachTaiSan[i].NHAP();
    }
}

void PHIEU::XUAT() {
    cout << "\nPHIEU KIEM KE TAI SAN\n\n";
    nhanVien.XUAT();
    phong.XUAT();
    cout << "Danh sach tai san: \n";
    cout << "+" + string(20, '-') 
          + "+" + string(20, '-') 
          + "+" + string(20, '-') 
          + "+" << endl;
    cout << "|" << setw(20) << left << "Ten tai san"
         << "|" << setw(20) << left << "So luong"
         << "|" << setw(20) << left << "Tinh trang"
         << "|" << endl;
    cout << "+" + string(20, '-') 
          + "+" + string(20, '-') 
          + "+" + string(20, '-') 
          + "+" << endl;
    for (int i = 0; i < soLuong; ++i) 
        danhSachTaiSan[i].XUAT();
    cout << "+" + string(20, '-') 
          + "+" + string(20, '-') 
          + "+" + string(20, '-') 
          + "+" << endl;
    cout << "So luong tai san da kiem ke: " << soLuong << endl;

    int tongSoLuong = 0;
    for (int i = 0; i < soLuong; ++i) 
        tongSoLuong += danhSachTaiSan[i].soLuong;
    cout << "Tong so luong: " << tongSoLuong << "\n\n";
}

void suaThongTin(PHIEU &phieu) {
    string ten;
    cout << "Nhap ten tai san can sua thong tin: ";
    getline(cin, ten);
    for (int i = 0; i < phieu.soLuong; ++i) {
        if (phieu.danhSachTaiSan[i].tenTaiSan == ten)
            phieu.danhSachTaiSan[i].soLuong = 20;
    }
    cout << "Da sua thong tin tai san!\n";
}

void sapXepDanhSach(PHIEU &phieu) {
    for (int i = 0; i < phieu.soLuong-1; ++i) {
        for (int j = i+1; j < phieu.soLuong; ++j) {
            if (phieu.danhSachTaiSan[i].soLuong > phieu.danhSachTaiSan[j].soLuong) {
                swap(phieu.danhSachTaiSan[i], phieu.danhSachTaiSan[j]);
            }
        }
    }
}

int main() {
    PHIEU phieu;
    phieu.NHAP();
    phieu.XUAT();
    suaThongTin(phieu);
    phieu.XUAT();
    sapXepDanhSach(phieu);
    phieu.XUAT();
    system("pause>0");
}
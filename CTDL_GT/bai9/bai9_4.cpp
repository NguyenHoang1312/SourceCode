#include<bits/stdc++.h>
using namespace std;

struct HocSinh {
    string hoTen, gioiTinh;
    int namSinh;
    float diemTK;
    void nhap();
    void xuat();
};

void HocSinh::nhap() {
    cout << "- Nhap ho va ten: "; cin.ignore(); getline(cin, hoTen);
    cout << "- Nhap gioi tinh: "; cin >> gioiTinh;
    cout << "- Nhap nam sinh: "; cin >> namSinh;
    cout << "- Nhap diem tong ket: "; cin >> diemTK;
}

void HocSinh::xuat() {
    cout << setw(20) << left << hoTen
         << setw(20) << left << gioiTinh
         << setw(20) << left << namSinh
         << setw(20) << left << diemTK << endl;
}

void inDanhSach(HocSinh a[], int n) {
    cout << "\n*****DANH SACH HOC SINH*****\n";
    cout << setw(20) << left << "Ho va ten"
         << setw(20) << left << "Gioi tinh" 
         << setw(20) << left << "Nam sinh"
         << setw(20) << left << "Diem tong ket" << endl;
    for (int i = 0; i < n; ++i)
        a[i].xuat();
    cout << endl;
}

void bubbleSort(HocSinh x[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = n-1; j > i; --j) {
            if (x[j].hoTen < x[j-1].hoTen) {
                HocSinh temp = x[j];
                x[j] = x[j-1];
                x[j-1] = temp;
            }
        }
    }
}

void selectionSort(HocSinh x[], int n) {
    for (int i = 0; i < n-1; ++i) {
        int m = i;
        for (int j = i+1; j < n; ++j)
            if (x[j].namSinh > x[m].namSinh)
                m = j;
        HocSinh temp = x[m];
        x[m] = x[i];
        x[i] = temp; 
    }
}

void insertionSort(HocSinh x[], int n) {
    for (int i = 1; i < n; ++i) {
        HocSinh temp = x[i];
        int j = i-1;
        while (j > -1 && x[j].diemTK < temp.diemTK) {
            x[j+1] = x[j];
            --j;
        }
        x[j+1] = temp;
    }
}

int main() {
    int n;
    do {
        cout << "Nhap so luong hoc sinh (nguyen duong): ";
        cin >> n;
    } while (n <= 0);

    HocSinh *ds = new HocSinh[n];
    cout << "Nhap danh sach hoc sinh:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Nhap hoc sinh thu " << i+1 << ":\n";
        ds[i].nhap();
    }

    inDanhSach(ds, n);

    cout << "\nSAP XEP DANH SACH THEO TEN THU TU TU DIEN BANG BUBBLESORT\n";
    bubbleSort(ds, n);
    inDanhSach(ds, n);

    cout << "\nSAP XEP DANH SACH THEO TUOI TANG DAN BANG SELECTIONSORT\n";
    selectionSort(ds, n);
    inDanhSach(ds, n);

    cout << "\nSAP XEP DANH SACH THEO DIEM TONG GIAM DAN BANG INSERTIONSORT\n";
    insertionSort(ds, n);
    inDanhSach(ds, n);
}
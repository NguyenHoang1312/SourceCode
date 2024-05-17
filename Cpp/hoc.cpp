#include<bits/stdc++.h>
using namespace std;

class MAYTINH;

class NSX {
	char ten_NSX[15];
	char dia_chi[15];
public:
	void nhap();
	void xuat();
};

void NSX::nhap() {
	cout << "Nhap ten NSX: "; fflush(stdin); gets(ten_NSX);
	cout << "Nhap dia chi: "; fflush(stdin); gets(dia_chi);
}

void NSX::xuat() {
	cout << setw(15) << ten_NSX << setw(15) << dia_chi;
}

class MAY {
protected:
	char nhanHieu[15];
	NSX x;
	float giaThanh;
public:
	void nhap();
	void xuat();
	friend void timKiem(MAYTINH a[], int n);
	friend void sapXep(MAYTINH a[], int n);
};

void MAY::nhap() {
	x.nhap();
	cout << "Nhap nhan hieu: "; fflush(stdin); gets(nhanHieu);
	cout << "Nhap gia thanh: "; cin >> giaThanh;
}

void MAY::xuat() {
	x.xuat();
	cout << setw(15) << nhanHieu << setw(15) << giaThanh;
}

class MAYTINH: public MAY {
	int tocDo, DL_RAM, DL_HDD;
public:
	void nhap();
	void xuat();
	friend void timKiem(MAYTINH a[], int n);
	friend void sapXep(MAYTINH a[], int n);
};

void MAYTINH::nhap() {
	MAY::nhap();
	cout << "Nhap toc do: "; cin >> tocDo;
	cout << "Nhap dung luong RAM: "; cin >> DL_RAM;
	cout << "Nhap dung luong HDD: "; cin >> DL_HDD;
}

void MAYTINH::xuat() {
	MAY::xuat();
	cout << setw(15) << tocDo << setw(15) << DL_RAM << setw(15) << DL_HDD << endl;
}


void timKiem(MAYTINH a[], int n) {
	cout << "\nDANH SANH MAY TINH CO NHAN HIEU \"HP\" LA:\n";
	cout << setw(15) << "Nha san xuat"
		 << setw(15) << "Dia chi"
		 << setw(15) << "Nhan hieu"
		 << setw(15) << "Gia thanh"
		 << setw(15) << "Toc do"
		 << setw(15) << "Dung luong RAM"
		 << setw(15) << "Dung luong HDD" << endl;
	for (int i = 0; i < n; ++i)
		if (strcmp(a[i].nhanHieu, "HP") == 0)
			a[i].xuat();
}

void sapXep(MAYTINH a[], int n) {
	for (int i = 0; i < n-1; ++i) {
		for (int j = i+1; j < n; ++j) {
			if (a[i].giaThanh > a[j].giaThanh) {
				MAYTINH temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	cout << "\nDANH SANH MAY TINH\n";
	cout << setw(15) << "Nha san xuat"
		 << setw(15) << "Dia chi"
		 << setw(15) << "Nhan hieu"
		 << setw(15) << "Gia thanh"
		 << setw(15) << "Toc do"
		 << setw(15) << "Dung luong RAM"
		 << setw(15) << "Dung luong HDD" << endl;
	for (int i = 0; i < n; ++i)
		a[i].xuat();
}

int main() {
	int n;
	do {
		cout << "Nhap n (2<=n<=30): ";
		cin >> n;
	} while (n < 2 || n > 30);

	MAYTINH *a = new MAYTINH[n];

	cout << "Nhap danh sanh may tinh: \n";
	for (int i = 0; i < n; ++i)
		a[i].nhap();

	cout << "\nDANH SANH MAY TINH\n";
	cout << setw(15) << "Nha san xuat"
		 << setw(15) << "Dia chi"
		 << setw(15) << "Nhan hieu"
		 << setw(15) << "Gia thanh"
		 << setw(15) << "Toc do"
		 << setw(15) << "Dung luong RAM"
		 << setw(15) << "Dung luong HDD" << endl;
	for (int i = 0; i < n; ++i)
		a[i].xuat();

	timKiem(a, n);
	sapXep(a, n);
	system("pause>0");
}
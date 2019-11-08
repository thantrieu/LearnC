#include <stdio.h>

struct PhanSo {
	int tu;
	int mau;
};

struct PhanSo nhap() {
	struct PhanSo p;
	printf("Nhap tu so: ");
	scanf("%d", &p.tu);
	while(1) {
		printf("Nhap mau so khac 0: ");
		scanf("%d", &p.mau);
		if(p.mau != 0) {
			break;
		}
	}
	return p;
}

int ucln(int a, int b) {
	if(a < 0) {
		a *= -1;
	} else if(b < 0){
		b *= -1;
	}
	while(a != b) {
		if(a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	return a;
}

struct PhanSo rutGon(struct PhanSo p) {
	if(p.tu != 0) {
		int u = ucln(p.tu, p.mau);
		p.tu /= u;
		p.mau /= u;
	}
	return p;
}

int bcnn(int a, int b) {
	int u = ucln(a, b);
	return a * b / u;
}

struct PhanSo cong(struct PhanSo a, struct PhanSo b) {
	struct PhanSo tong;
	int kq = bcnn(a.mau, b.mau);
	tong.mau = kq;
	tong.tu = a.tu * b.mau + a.mau * b.tu;
	tong = rutGon(tong);
	return tong;
}

struct PhanSo tru(struct PhanSo a, struct PhanSo b) {
	struct PhanSo tong;
	int kq = bcnn(a.mau, b.mau);
	tong.mau = kq;
	tong.tu = a.tu * b.mau - a.mau * b.tu;
	tong = rutGon(tong);
	return tong;
}

int main(){
	struct PhanSo p = nhap();
//	p = rutGon(p);
	struct PhanSo q = nhap();
//	struct PhanSo tong = cong(p, q);
	struct PhanSo hieu = tru(p, q);
	
//	printf("Tong hai phan so: %d/%d + %d/%d = %d/%d\n", 
//		p.tu, p.mau, q.tu, q.mau, tong.tu, tong.mau);
		
	printf("Hieu hai phan so: %d/%d - %d/%d = %d/%d\n", 
		p.tu, p.mau, q.tu, q.mau, hieu.tu, hieu.mau);
	return 0;
}


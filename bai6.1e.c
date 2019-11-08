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
		a = a*-1;
	}
	if(b < 0) {
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
	tong.mau = bcnn(a.mau, b.mau);
	tong.tu = tong.mau / a.mau * a.tu + b.tu * tong.mau / b.mau;
	tong = rutGon(tong);
	return tong;
}

struct PhanSo tru(struct PhanSo a, struct PhanSo b) {
	struct PhanSo hieu;
	hieu.mau = bcnn(a.mau, b.mau);
	hieu.tu = hieu.mau / a.mau * a.tu - b.tu * hieu.mau / b.mau;
	hieu = rutGon(hieu);
	return hieu;
}

struct PhanSo nhan(struct PhanSo a, struct PhanSo b) {
	struct PhanSo kq;
	kq.tu = a.tu * b.tu;
	kq.mau = a.mau * b.mau;
	kq = rutGon(kq);
	return kq;
}

struct PhanSo chia(struct PhanSo a, struct PhanSo b) {
	struct PhanSo kq;
	kq.tu = a.tu * b.mau;
	kq.mau = a.mau * b.tu;
	kq = rutGon(kq);
	return kq;
}

int main(){
	struct PhanSo p = nhap();
	struct PhanSo q = nhap();
	struct PhanSo kq = cong(p, q);
	struct PhanSo hieu = tru(p, q);
	struct PhanSo tich = nhan(p, q);
	struct PhanSo thuong = chia(p, q);
	
	printf("%d/%d + %d/%d = %d/%d\n", 
		p.tu, p.mau, q.tu, q.mau, kq.tu, kq.mau);
		
	printf("%d/%d - %d/%d = %d/%d\n", 
		p.tu, p.mau, q.tu, q.mau, hieu.tu, hieu.mau);
	
	printf("%d/%d * %d/%d = %d/%d\n", 
		p.tu, p.mau, q.tu, q.mau, tich.tu, tich.mau);
		
	printf("%d/%d / %d/%d = %d/%d\n", 
		p.tu, p.mau, q.tu, q.mau, thuong.tu, thuong.mau);
		
	return 0;
}


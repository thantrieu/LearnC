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

void hienThi(struct PhanSo p) {
	printf("%d/%d\n", p.tu, p.mau);
}

int main(){
	int luaChon;
	do {
		printf("===== MENU =====");
		printf("\n1. Nhap vao hai phan so.");
		printf("\n2. Rut gon hai phan so.");
		printf("\n3. Cong hai phan so.");
		printf("\n4. Tru hai phan so.");
		printf("\n5. Nhan hai phan so.");
		printf("\n6. Chia hai phan so.");
		printf("\n0. Thoat chuong trinh.");
		printf("\nBan chon ? \n");
		
		scanf("%d", &luaChon);
		struct PhanSo a, b, tong, hieu, tich, thuong;
		
		switch(luaChon) {
			case 0:
				break;
			case 1:
				printf("Nhap phan so thu nhat: \n");
				a = nhap();
				printf("Nhap phan so thu hai: \n");
				b = nhap();
				printf("Hai phan so vua nhap: \n");
				hienThi(a);
				hienThi(b);
				break;
			case 2:
				a = rutGon(a);
				b = rutGon(b);
				printf("Phan so a sau khi rut gon: ");
				hienThi(a);
				printf("Phan so b sau khi rut gon: ");
				hienThi(b);
				break;
			case 3:
				tong = cong(a, b);
				printf("%d/%d + %d/%d = %d/%d\n", 
					a.tu, a.mau, b.tu, b.mau, tong.tu, tong.mau);
				break;
			case 4:
				hieu = tru(a, b);
				printf("%d/%d - %d/%d = %d/%d\n", 
					a.tu, a.mau, b.tu, b.mau, hieu.tu, hieu.mau);
				break;
				
			case 5:
				tich = nhan(a, b);
				printf("%d/%d * %d/%d = %d/%d\n", 
					a.tu, a.mau, b.tu, b.mau, tich.tu, tich.mau);
				break;
				
			case 6:
				thuong = chia(a, b);
				printf("%d/%d / %d/%d = %d/%d\n", 
					a.tu, a.mau, b.tu, b.mau, thuong.tu, thuong.mau);
				break;
			
			default:
				printf("Sai chuc nang, vui long chon lai!\n");
				break;
		}
	} while(luaChon);

	return 0;
}


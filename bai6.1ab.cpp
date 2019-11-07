#include <stdio.h>

struct PhanSo{
	int tu;
	int mau;
};

struct PhanSo nhap() {
	PhanSo p;
	printf("Nhap tu so, mau so: ");
	scanf("%d%d", &p.tu, &p.mau);
	return p;
}

int ucln(int a, int b) {
	while(a != b){
		if(a > b) {
			a = a - b;
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

int main(){
	PhanSo p = nhap();
	p = rutGon(p);
	printf("phan so: %d/%d\n", p.tu, p.mau);
	return 0;
}


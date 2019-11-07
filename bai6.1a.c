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

int main(){
	struct PhanSo p = nhap();
	printf("%d/%d\n", p.tu, p.mau);
	return 0;
}


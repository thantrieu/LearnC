#include <stdio.h>

int nhapN() {
	int n = 0;	
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}

int tongChuSo(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void phanTich(int n) {
	int i = 2;
	printf("\nPhan tich n ra thua so nguyen to: ");
	printf("\n%d = ", n);
	while(i <= n) {
		if(n % i == 0) {
			printf("%5d", i);
			n /= i;
		} else {
			i++;
		}
	}
}

int main() {
	int n;
	n = nhapN();
	int sum = tongChuSo(n);
	printf("Tong cac chu so cua n = %d", sum);
	phanTich(n);
	
	return 0;
}


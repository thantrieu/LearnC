#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool nguyenTo(int n) {
	
}

int nhap() {
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}

void lietKeNguyenTo(int n) {
	printf("\nN so nguyen to dau tien: \n");
	int count = 0;
	int i = 2;
	while(count < n) {
		if(nguyenTo(i)) {
			printf("%-10d", i);
			count ++;
		}
		i++;
	}
}

void lietKeChinhPhuong(int n) {
	printf("\nN so chinh phuong dau tien: \n");
	int i;
	for(i = 0; i < n; i++) {
		printf("%-10d", i * i);
	}
}

void lietKeFibonacci(int n) {
	printf("\nN so fibonacci dau tien: \n");
	int i;
	unsigned long long f0 = 0;
	unsigned long long f1 = 1;
	unsigned long long fn;
	for(i = 0; i < n; i++) {
		if(i < 2) {
			fn = i;
		} else {
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
		}
		printf("F%d = %lld\n", i, fn);
	}
}

int main() {
	int n = nhap();
	lietKeNguyenTo(n);
	lietKeFibonacci(n);
	lietKeChinhPhuong(n);
	
	return 0;
}


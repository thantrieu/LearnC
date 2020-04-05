#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int nhapN() {
	int n = -1;
	while(n <= 0) {
		printf("Nhap so nguyen n > 0: ");
		scanf("%d", &n);
	}
	return n;
}

bool ktraNgto(int n) {
	if(n < 2) {
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

void lietKeNgto(int n) {
	printf("%d so nguyen to dau tien: \n", n);
	int i = 2;
	while(n > 0) {
		if(ktraNgto(i)) {
			printf("%d, ", i);
			n--;
		}
		i++;
	}
}

void lietKeFibo(int n) {
	printf("\n%d so Fibonacci dau tien: \n", n);
	long long f1 = 1, f0 = 0, fn;
	int i;
	for(i = 0; i < n; i++) {
		if(i <= 1) {
			fn = i;
		} else {
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
		}
		printf("F%d = %lld\n", i, fn);		
	}
}

void lietKeChinhPhuong(int n) {
	printf("\n%d so chinh phuong dau tien: \n", n);
	int i;
	for(i = 0; i < n; i++) {
		printf("%d, ", i * i);
	}
}

int main() {
	int n = nhapN();
	lietKeNgto(n);
	lietKeFibo(n);
	lietKeChinhPhuong(n);
	return 0;
}


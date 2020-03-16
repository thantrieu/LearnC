#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int nhapN();
bool ktraNgto(int);
void lkNgto(int);
void lkFibo(int);
void lkCp(int);

int main() {
	int n = nhapN();
	lkNgto(n);
	lkFibo(n);
	lkCp(n);
	return 0;
}

void lkNgto(int n) {
	printf("Liet ke n so nguyen to: \n");
	int i = 2;
	int count = 0;
	while(count < n) {
		if(ktraNgto(i)) {
			printf("%5d", i);
			count++;
		}
		i++;
	}
}

void lkFibo(int n) {
	printf("\nLiet ke n so Fibonacci: \n");
	long f0 = 0, f1 = 1, fn;
	int i;
	for(i = 0; i < n; i++) {
		if(i < 2) {
			printf("F%d = %d\n", i, i);
		} else {
			fn = f0 + f1;
			f1 = fn;
			f0 = f1;
			printf("F%d = %ld\n", i, fn);
		}
	}
}

void lkCp(int n) {
	printf("Liet ke n so chinh phuong: \n");
	int i;
	for(i = 0; i < n; i++) {
		printf("C%d = %d\n", i, i * i);
	}
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

int nhapN() {
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}

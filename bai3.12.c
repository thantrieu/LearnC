#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int nhapN() {
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}

void lietKeUoc(int n) {
	int i;
	printf("Cac uoc so cua n: ");
	for(i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			printf("%5d", i);
			if(i != n/i) {
				printf("%5d", n / i);
			}
		}
	}
}

void demUoc(int n) {
	int i, count = 0;
	printf("\nSo uoc so cua n: ");
	for(i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			if(i != n/i) {
				count += 2;
			} else {
				count++;
			}
		}
	}
	printf("%d\n", count);
}

bool ktraNgTo(int n) {
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

void lietKeUocNT(int n) {
	int i;
	printf("Cac uoc so nguyen to cua n: ");
	for(i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			if(ktraNgTo(i)) {
				printf("%5d", i);
			}
			if(ktraNgTo(n / i) && i != (n/i)) {
				printf("%5d", n / i);
			}
		}
	}
}

int main() {
	int n = nhapN();
	lietKeUoc(n);
	demUoc(n);
	lietKeUocNT(n);
	
	return 0;
}


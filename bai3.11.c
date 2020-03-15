#include <stdio.h>
#include <stdbool.h>

int nhap() {
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	return n;
}

bool ktra(int n) {
	int a, b;
	a = n % 10;
	n /= 10;
	while(n > 0) {
		b = n % 10;
		n /= 10;
		if(b >= a) {
			return false;
		}
		a = b;
	}
	return true;
}

int firstDigit(int n) {
	int digit = 0;
	while(n > 0) {
		digit = n % 10;
		n /= 10;
	}
	return digit;
}

int countFirstDigit(int n) {
	int first = firstDigit(n);
	int count = 0;
	int aDigit;
	while(n > 0) {
		aDigit = n % 10;
		n /= 10;
		if(aDigit == first) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	
	n = nhap();
	
	if(ktra(n)) {
		printf("Cac chu so cua n sap xep theo thu tu tang dan!\n");
	} else {
		printf("Cac chu so cua n KHONG sap xep theo thu tu tang dan!\n");
	}
	
	printf("Chu so dau tien cua n: %d\n", firstDigit(n));
	
	printf("So lan xuat hien cua chu so dau tien cua n: %d\n", countFirstDigit(n));
	
	return 0;
}


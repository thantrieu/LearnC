#include <stdio.h>

int nhap() {
	int n = 0;
	while(n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}	
	return n;
}

int demChuSo(int n) {
	int count = 0;
	while(n > 0) {
		count++;
		n /= 10;
	}
	return count;
}

int demChuSoLe(int n) {
	int count = 0;
	int c;
	while(n > 0) {
		c = n % 10;
		if(c % 2 != 0) {
			count++;	
		}
		n /= 10;
	}
	return count;
}

float tbc(int n) {
	float tb = 0;
	int sl = demChuSo(n);
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	tb = (float)sum / sl;
	return tb;
}

int main() {
	int n = nhap();
	printf("So chu so cua n: %d\n", demChuSo(n));
	printf("So chu so le cua n: %d\n", demChuSoLe(n));
	printf("TBC cac chu so cua n: %0.2f", tbc(n));
	return 0;
}


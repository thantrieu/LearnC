#include <stdio.h>

void nhapMang(int *a, int *n) {
	printf("Nhap phan tu mang: ");
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++) {
		printf("Phan tu thu %d = ", i);
		scanf("%d", &a[i]);
	}
}

void nhapK(int *k, int n) {
	*k = -1;
	while(*k < 0 || *k >= n) {
		printf("Nhap gia tri 0 <= k < %d", n);
		scanf("%d", k);
	}
}

void hienThi(int *a, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}
	printf("\n");
}

void chen(int *a, int n, int *b, int m, int k) {
	// don phai 
	int i;
	for(i = m + n - 1; i >= k; i--) {
		a[i] = a[i - m];
	}
	// gan gia tri mang b vao mang a
	for(i = k; i < k + m; i++) {
		a[i] = b[i - k];
	}
}

int main() {
	int a[100];
	int b[100];
	int m, n, k;
	printf("Nhap mang A: \n");
	nhapMang(a, &n);
	printf("Nhap mang B: \n");
	nhapMang(b, &m);
	nhapK(&k, n);
	printf("Mang A truoc khi chen: ");
	hienThi(a, n);
	printf("Mang B: ");
	hienThi(b, m);
	printf("Mang A sau khi chen: ");
	chen(a, n, b, m, k);
	hienThi(a, m + n);
	return 0;
}

#include <stdio.h>

void nhap(int *a, int *n) {
	*n = -1;
	while(*n < 0) {
		printf("Nhap bac cua da thuc: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i <= *n; i++) {
		printf("he so x^%d = ", i);
		scanf("%d", &a[i]);
	}
}

void khoiTao(int *a, int n) {
	int i;
	for(i = 0; i < n; i++) {
		a[i] = 0;
	}
}

void tong(int *a, int m, int *b, int n, int *s, int *k) {
	int i;
	*k = (m > n) ? m : n;
	for(i = 0; i <= *k; i++) {
		s[i] = a[i] + b[i];
	}
}

void hienThi(int *a, int n) {
	int i;
	for(i = n; i >= 0; i--) {
		printf("%dx^%d", a[i], i);
		if(i > 0 && a[i-1] > 0) {
			printf(" + ");
		} else if(a[i - 1] < 0) {
			printf(" ");
		}
	}
}

int main() {
	int p[100], q[100], s[100];
	int m, n, k;
	khoiTao(p, 100);
	khoiTao(q, 100);
	
	printf("Thong tin da thuc P(x): \n");
	nhap(p, &m);
	
	printf("Thong tin da thuc Q(x): \n");
	nhap(q, &n);
	
	tong(p, m, q, n, s, &k);
	
	printf("S(x) = ");
	hienThi(s, k);
	
	return 0;
}


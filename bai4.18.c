#include <stdio.h>

void nhap(int *a, int *n) {
	*n = -1;
	while(*n < 0) {
		printf("Nhap n >= 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i <= *n; i++) {
		printf("a%d = ", i);
		scanf("%d", &a[i]);
	}
}

double tinhDH(int *a, int n) {
	double x;
	printf("Nhap x: ");
	scanf("%lf", &x);
	double xMuJ = 1; // j = i - 1
	double kq = a[1];
	int i;
	for(i = 2; i <= n; i++) {
		xMuJ *= x;
		kq += a[i] * i * xMuJ;
	}
	return kq;
}

int main() {
	int n;
	int a[100];
	nhap(a, &n);
	double kq = tinhDH(a, n);
	printf("Dao ham bac 1 cua P(x): %0.3lf", kq);
	
	return 0;
}


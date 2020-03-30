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

double tinhGTBT(int *a, int n) {
	double x;
	printf("Nhap x: ");
	scanf("%lf", &x);
	double kq = a[0];
	int i;
	double xMuI = 1;
	for(i = 1; i <= n; i++) {
		xMuI *= x;
		kq += a[i] * xMuI;
	}
	return kq;
}

int main() {
	int n;
	int a[101];
	nhap(a, &n);
	double kq = tinhGTBT(a, n);
	printf("Gia tri cua da thuc = %0.3lf", kq);
	return 0;
}
 

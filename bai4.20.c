#include <stdio.h>

void nhap(int a[50][50], int *m, int *n) {
	*m = *n = 0;
	while(*m <= 0 || *n <= 0) {
		printf("Nhap so nguyen m, n > 0: ");
		scanf("%d%d", m, n);
	}
	int i, j;
	for(i = 0; i < *m; i++) {
		for(j = 0; j < *n; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void hienThi(int a[50][50], int m, int n) {
	printf("======================\n");
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void timMax(int a[50][50], int m, int n) {
	printf("======================\n");
	int i, j, max;
	for(i = 0; i < m; i++) {
		max = a[i][0];
		for(j = 1; j < n; j++) {
			if(a[i][j] > max) {
				max = a[i][j];
			}
		}
		printf("Max tren hang %d = %d\n", i, max);
	}
}

int main() {
	int a[50][50], m, n;
	nhap(a, &m, &n);
	hienThi(a, m, n);
	timMax(a, m, n);
	return 0;
}


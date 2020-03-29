#include <stdio.h>

void nhap(int arr[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("Nhap arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void nhapMN(int *m, int *n) {
	*m = 0, *n = 0;
	while(*m <= 0 && *n <= 0) {
		printf("Nhap m, n: ");
		scanf("%d%d", m, n);
	}
}

void tong(int a[50][50], int b[50][50], int c[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void hienThi(int c[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int m, n;
	int a[50][50], b[50][50], c[50][50];
	
	nhapMN(&m, &n);
	
	printf("\nNhap ma tran A: \n");
	nhap(a, m, n);
	
	printf("\nNhap ma tran B: \n");
	nhap(b, m, n);
	tong(a, b, c, m, n);
	
	printf("\nMa tran A: \n");
	hienThi(a, m, n);
	
	printf("\nMa tran B: \n");
	hienThi(b, m, n);
	
	printf("\nMa tran C: \n");
	hienThi(c, m, n);
	
	return 0;
}


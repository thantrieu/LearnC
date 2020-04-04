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
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

// bij = aji
void chuyenVi(int a[50][50], int m, int n, int b[50][50]) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			b[i][j] = a[j][i];
		}
	}
}

int main() {
	int a[50][50], b[50][50];
	int m, n;
	printf("Nhap ma tran A: ");
	nhap(a, &m, &n);
	chuyenVi(a, m, n, b);
	
	printf("======================\n");
	printf("Ma tran A: \n");
	hienThi(a, m, n);
	
	printf("======================\n");
	printf("Ma tran B: \n");
	hienThi(b, n, m);
	
	return 0;
}


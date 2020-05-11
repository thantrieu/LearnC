#include <stdio.h>

void giam(int, int, int, int, int a[50][50], int*);
void tang(int, int, int, int, int a[50][50], int*);

void tang(int x1, int x2, int y1, int y2, int a[50][50], int *d) {
	int i;
	for(i = x1; i <= x2; i++) {
		a[y1][i] = (*d)++;
	}
	
	for(i = y1 + 1; i <= y2; i++) {
		a[i][x2] = (*d)++;
	}
		
	if(x1 < x2 && y1 < y2) {
		y1++;
		x2--;
		giam(x1, x2, y1, y2, a, d);
	}
}

void giam(int x1, int x2, int y1, int y2, int a[50][50], int *d) {
	int i;
	for(i = x2; i >= x1; i--) {
		a[y2][i] = (*d)++;
	}

	for(i = y2 - 1; i >= y1; i--) {
		a[i][x1] = (*d)++;
	}

	if(x1 < x2 && y1 < y2) {
		y2--;
		x1++;
		tang(x1, x2, y1, y2, a, d);
	}
}

void hien(int a[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n\n");
	}
}

int main() {
	int m, n;
	int a[50][50];
	int d = 0;
	scanf("%d%d", &m, &n);
	int x1 = 0, x2 = n - 1;
	int y1 = 0, y2 = m - 1;
	tang(x1, x2, y1, y2, a, &d);
	hien(a, m, n);
	return 0;
}

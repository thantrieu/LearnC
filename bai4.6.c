#include <stdio.h>

void nhap(int *arr, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void tinhToan(int *arr, int n, float *tbc, float *tbl) {
	int i;
	int demL = 0;
	int tongC = 0;
	int tongL = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			tongC += arr[i];
		} else {
			tongL += arr[i];
			demL++;
		}
	}
	*tbc = (demL == n) ? 0 : 1.0f * tongC / (n - demL);
	*tbl = (demL == 0) ? 0 : 1.0f * tongL / demL;
}

void hienThi(float tbc, float tbl) {
	printf("TBC so chan = %0.2f\n", tbc);
	printf("TBC so le = %0.2f\n", tbl);
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	
	float tbc, tbl;
	tinhToan(arr, n, &tbc, &tbl);
	hienThi(tbc, tbl);
	
	return 0;
}


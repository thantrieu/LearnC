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

void nhapAB(int *a, int *b) {
	while(1) {
		printf("Nhap a < b: ");
		scanf("%d%d", a, b);
		if(*a < *b) {
			break;
		}
	}
}

int tinhTong(int *arr, int n, int a, int b) {
	int tong = 0;
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] >= a && arr[i] <= b) {
			tong += arr[i];
		}
	}
	return tong;
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	
	int a, b;
	nhapAB(&a, &b);
	
	int tong = tinhTong(arr, n, a, b);
	printf("TONG [%d, %d] = %d", a, b, tong);
	
	return 0;
}


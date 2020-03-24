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

int demX(int *arr, int n, int x) {
	int count = 0;
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] == x) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	int x;
	
	printf("Nhap so nguyen x: ");
	scanf("%d", &x);
	
	int soLanXuatHien = demX(arr, n, x);
	printf("So lan xuat hien cua x trong mang: %d", soLanXuatHien);
	
	return 0;
}


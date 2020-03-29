#include <stdio.h>
#include <stdbool.h>

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

bool daXuatHien(int *arr, int index, int x) {
	int i;
	for(i = 0; i < index; i++) {
		if(arr[i] == x) {
			return true;
		}
	}
	return false;
}

void hienThi(int *arr, int n) {
	int i;
	for(i = 0; i < n; i++) {
		if(!daXuatHien(arr, i, arr[i])) {
			printf("%10d", arr[i]);
		}
	}
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	hienThi(arr, n);
	return 0;
}


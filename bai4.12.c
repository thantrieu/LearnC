#include <stdio.h>

void nhap(int *arr, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < (*n - 1); i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int nhapK(int n) {
	int k = -1;
	while(k < 0 || k >= n) {
		printf("Nhap k(0 <= k < n): ");
		scanf("%d", &k);
	}
	return k;
}

void chen(int *arr, int n, int k, int x) {
	int i;
	for(i = n-1; i > k; i--) {
		arr[i] = arr[i - 1];
	}
	arr[k] = x;
}

void hienThi(int *arr, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%-10d", arr[i]);
	}
}

int main() {
	int n;
	int arr[100];
	int k, x;
	
	nhap(arr, &n);
	k = nhapK(n);
	
	printf("Nhap x: ");
	scanf("%d", &x);
	
	chen(arr, n, k, x);
	hienThi(arr, n);
	
	return 0;
}


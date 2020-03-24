#include <stdio.h>
#include <math.h>
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

int timHieuMin(int *arr, int n, int x) {
	int hieu = abs(arr[0] - x);
	int i;
	for(i = 1; i < n; i++) {
		if(abs(arr[i] - x) < hieu) {
			hieu = abs(arr[i] - x);
		}
	}
	return hieu; // hieu nho nhat, 
}

bool chuaXH(int *b, int n, int v) {
	int i;
	for(i = 0; i < n; i++) {
		if(b[i] == v) {
			return false;
		}
	}
	return true;	
}

void hienQK(int *arr, int n, int x, int hieu) {
	int i;
	int b[100];
	int count = 0;
	for(i = 0; i < n; i++) {
		if(abs(arr[i] - x) == hieu && chuaXH(b, count, arr[i])) {
			printf("%10d", arr[i]);
			b[count++] = arr[i];
		}
	}
}

int main() {
	int n, arr[100];
	int x;
	nhap(arr, &n);
	printf("Nhap x: ");
	scanf("%d", &x);
	int hieu = timHieuMin(arr, n, x);
	hienQK(arr, n, x, hieu);
	
	return 0;
}


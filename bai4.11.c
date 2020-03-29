#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool chuaXH(int *arr, int n, int x) {
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] == x) {
			return false;
		}
	}
	return true;
}

void nhap(int *arr, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	
	int i = 0;
	srand(time(0));
	while(i < *n) {
		int x = rand();
		if(chuaXH(arr, i, x)) {
			arr[i++] = x;
		}
	}
}

void xuat(int *arr, int n) {
	int i;
	for(i = 0; i < n; i++)  {
		printf("%d, ", arr[i]);
	}
}

int main() {
	int n;
	int arr[1000];
	nhap(arr, &n);
	xuat(arr, n);
	return 0;
}


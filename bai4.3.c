#include <stdio.h>

void nhap(int *arr, int *n) {
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

void sapXepTang(int *arr, int n) {
	int i, j;
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j--) {
			if(arr[j] < arr[j - 1]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}

void sapXepGiam(int *arr, int n) {
	int i, j;
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j--) {
			if(arr[j] > arr[j - 1]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}

void hienThi(int *arr, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%6d", arr[i]);
	}
	printf("\n");
}

int main() {
	int n = 0;
	int arr[100];
	
	nhap(arr, &n);
	printf("\nTruoc sap xep: \n");
	hienThi(arr, n);
	
	sapXepTang(arr, n);
	printf("\nSau sap xep tang: \n");
	hienThi(arr, n);
	
	sapXepGiam(arr, n);
	printf("\nSau sap xep giam: \n");
	hienThi(arr, n);
	
	return 0;
}


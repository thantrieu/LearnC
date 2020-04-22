#include <stdio.h>

void nhap(int *arr, int *n);
void minMax(int *arr, int n, int *min, int *max);
void minMax2(int *arr, int n, int *min2, int *max2);
void ketQua(int min2, int max2);

int main() {
	int n = 0;
	int arr[100];
	int min2, max2;
	nhap(arr, &n);
	minMax2(arr, n, &min2, &max2);
	return 0;
}

void nhap(int *arr, int *n) {
	while((*n) <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < (*n); i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void minMax(int *arr, int n, int *min, int *max) {
	int i;
	(*min) = (*max) = arr[0];
	for(i = 1; i < n; i++) {
		if((*min) > arr[i]) {
			(*min) = arr[i];
		}
		if((*max) < arr[i]) {
			(*max) = arr[i];
		}
	}
}

void minMax2(int *arr, int n, int *min2, int *max2) {
	int min, max;
	minMax(arr, n, &min, &max);
	*min2 = max;
	*max2 = min;
	int i;
	for(i = 1; i < n; i++) {
		if((*min2) > arr[i] && arr[i] != min) {
			(*min2) = arr[i];
		}
		if((*max2) < arr[i] && arr[i] != max) {
			(*max2) = arr[i];
		}
	}
	
	if(min != (*min2) && max != (*max2) && *min2 < *max2) {
		ketQua(*min2, *max2);
	} else {
		printf("\nKhong co gia tri thoa man");
	}
}

void ketQua(int min2, int max2) {
	if(min2 == max2) {
		printf("\nKhong co gia tri thoa man");
	} else {
		printf("\nMIN2 = %d\nMAX2 = %d", min2, max2);
	}
}

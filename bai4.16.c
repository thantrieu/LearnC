#include <stdio.h>

void nhap(int* arr, int* n) {
	printf("Nhap so phan tu: ");
	scanf("%d", n);
	int i;
	for (i = 0; i < *n; i++) {
		printf("Phan tu thu %d: ", i);
		scanf("%d", &arr[i]);
	}
}

void hienThi(int* arr, int startIndex, int length) {
	int i;
	printf("\nVi tri bat dau: %d, do dai: %d", startIndex, length);
	printf("\nCac phan tu trong duong chay la: ");
	for(i = startIndex; i < startIndex + length; i++) {
		printf("%5d", arr[i]);
	}
	printf("\n");
}

void hienMang(int* arr, int n) {
	int i;
	printf("\nMang goc: ");
	for(i = 0; i < n; i++) {
		printf("%5d", arr[i]);
	}
}

void timViTri(int *arr, int n, int *start, int *end, int *count) {
	int j = 0;
	start[j] = 0;
	int i;
	for(i = 0; i < n - 1; i++) {
		if(arr[i] > arr[i + 1] ){
			end[j++] = i;
			start[j] = i + 1;
		}
	}
	end[j++] = n - 1;
	*count = j;
}

int timMax(int *start, int *end, int n) {
	int max = end[0] - start[0] + 1;
	int i;
	for(i = 1; i < n; i++) {
		int length = end[i] - start[i] + 1;
		if(length > max) {
			max = length;
		}
	}
	return max;
}

void ketQua(int *arr, int n, int *start, int *end, int count) {
	int i;
	if(count == n) {
		printf("\nKhong co duong chay dai nhat.");
	} else {
		int max = timMax(start, end, count);
		for(i = 0; i < count; i++) {
			int len = end[i] - start[i] + 1;
			if(len == max) {
				hienThi(arr, start[i], len);
			}
		}
	}
}

int main() {
	int arr[100], n;
	int start[100];
	int end[100];
	int count = 0;
	nhap(arr, &n);
	hienMang(arr,n);
	timViTri(arr, n, start, end, &count);
	ketQua(arr, n, start, end, count);
	return 0;
}

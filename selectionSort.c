#include<stdio.h>

void nhap(int a[], int *n ){
 	printf("Nhap n = ");
	scanf("%d", n);
	int i;
 	for(i = 0; i < *n; i++) {
 		printf("a[%d] = ", i + 1);
 		scanf("%d", &a[i]);
	}
}

void swap(int *x, int *y ) {
	int tg = *x;
	*x = *y;
	*y = tg;
}

void selectionSort(int a[], int n) {
	int i;
	int j;
	for(i = 0; i < n - 1; i++) {
		int min = i;
		for(j = i + 1; j < n; j++) {
			if(a[j] < a[min]) {
				min = j;
			}
		}	
		swap(&a[min], &a[i]);
	}
}
 
void xuat(int a[], int n ) {
	int i;
 	for(i = 0; i < n; i++) {
 		printf("%5d", a[i]);
	 }
 	printf("\n");
}
 
int main() {
	int a[20], n;
	
	nhap(a, &n);
	printf("\nMang truoc sap xep: ");
	xuat(a, n);
	
	selectionSort(a, n);
	printf("\nMang sau sap xep: ");
	xuat(a, n);
	
 	return  0;
}

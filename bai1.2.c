#include <stdio.h>

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	if(n < 0) { // n am
		printf("%d la so am\n", n);
	} else if(n == 0) { // khong am khong duong
		printf("%d la so khong am khong duong\n", n);
	} else { // so duong
		printf("%d la so duong\n", n);
	}
	
	// kiem tra chan hay le
	if(n % 2 == 0) {
		printf("%d la so chan\n", n);
	} else {
		printf("%d la so le\n", n);
	}
	
	return 0;
}

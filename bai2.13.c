#include <stdio.h>

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(n > 0) {
		int m = n; // luu lai gia tri cua n
		int dao = 0;
		// 12345
		// dao: 54321
		// m: 0
		// 
		while(m > 0) {
			dao = dao * 10 + m % 10;
			m /= 10;	
		}
		if(dao == n) {
			printf("%d la so thuan nghich.\n", n);
		} else {
			printf("%d khong phai so thuan nghich.\n", n);
		}
	} else {
		printf("Nhap n > 0!");
	}
	
	return 0;
}


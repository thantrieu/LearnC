#include <stdio.h>

int main() {
	long n;
	printf("Nhap n > 0: ");
	scanf("%ld", &n);
	if(n < 0) {
		printf("Nhap n > 0!");
	} else {
		long dao = 0;
		long m = n;
		while(m > 0) {
			dao = dao * 10 + m % 10;
			m /= 10;
		}
		
		if(dao == n) {
			printf("%ld la so thuan nghich.\n", n);
		} else {
			printf("Khong thuan nghich.\n");
		}
	}
	return 0;
}


#include <stdio.h>

int main() {
	unsigned int n;
	printf("Nhap so n > 1: ");
	scanf("%u", &n);
	
	if(n < 2) {
		printf("Nhap n > 1");
	} else {
		unsigned int i = 2;
		printf("%u = ", n);
		while(n > 1) {
			if(n % i == 0) {
				printf("%u", i);
				if(n != i) {
					printf("x");
				}
				n /= i;
			} else {
				i++;
			}
		}
	}
	
	return 0;
}

// Bai 2.7: liet ke cac uoc cua so nguyen duong n
#include <stdio.h>

int main() {
	unsigned long n;
	unsigned long i;
	unsigned int counter = 0;
	
	printf("Nhap vao so duong n: ");
	scanf("%lu", &n);
	for(i = 1; i <= n; i++) {
		if(n % i == 0) {
			printf("%lu, ", i);
			counter++;
		}
	}
	printf("\n%lu co tong so %u uoc so.\n", n, counter);
	
	return 0;
}

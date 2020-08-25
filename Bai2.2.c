#include<stdio.h>

int main() {
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%u", &n);
	unsigned int sum = 0;
	unsigned int i = 1;
	
	for(; i <= n; i++) {
		sum += i;
	}
	
	printf("Cach 1: SUM = %u\n", sum);
	
	sum = 0; // reset lai gia tri sum
	sum = (n + 1) * n / 2;
	printf("Cach 2: SUM = %u\n", sum);
	
	return 0;
}

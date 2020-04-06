#include<stdio.h>

int main() {
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%u", &n);
	unsigned int sum = 0;
	unsigned int i = 1;
	/*
	for(; i <= n; i++) {
		sum += i;
	}
	*/
	sum = (n + 1) * n / 2;
	printf("SUM = %u", sum);
	
	return 0;
}

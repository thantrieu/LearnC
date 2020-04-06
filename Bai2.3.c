#include <stdio.h>

int main() {
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%u", &n);
	unsigned int i;
	float sum = 0;
	
	for(i = 1; i  <= n; i++) {
		sum += 1.0f / i;
	}
	
	printf("SUM = %0.5f", sum);
	
	return 0;	
}

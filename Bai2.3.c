#include <stdio.h>

int main() {
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%u", &n);
	unsigned int i;
	double sum = 0;
	// dung vong lap for
	for(i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}
	// hien ket qua
	printf("SUM = %0.5lf", sum);
	
	return 0;	
}

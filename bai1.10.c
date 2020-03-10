#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	printf("Nhap ba canh: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a > 0 && b > 0 && c > 0) {
		// c1:
		if(abs(a - c) < b && b < (a + c)) {
			printf("Ba so lap thanh mot tam giac!\n");
		} else {
			printf("Ba so khong tao thanh tam giac!\n");
		}
		
		// c2:
		if(a < b + c && b < a + c && c < a + b) {
			printf("Ba so lap thanh mot tam giac!\n");
		} else {
			printf("Ba so khong tao thanh tam giac!\n");
		}
	} else {
		printf("Nhap vao ba so duong!");
	}
	
	return 0;
}

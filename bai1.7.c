#include <stdio.h>

int main() {
	float r;
	const float PI = 3.141592f;
	printf("Nhap ban kinh duong tron: ");
	scanf("%f", &r);
	if(r <= 0) {
		printf("Nhap r > 0");
	} else {
		printf("Chu vi duong tron ban kinh %0.2f = %0.2f\n", r, 2 * PI * r);
		printf("Dien tich duong tron ban kin %0.2f = %0.2f", r, PI * r * r);
	}
	return 0;
}

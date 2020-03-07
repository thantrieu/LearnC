#include <stdio.h>

int main() {
	float a, b, x;
	printf("Nhap a, b: ");
	scanf("%f%f", &a, &b);
	
	if(a == 0 && b != 0) {
		printf("Phuong trinh vo nghiem\n");
	} else if(a == 0 && b == 0) {
		printf("Phuong trinh co vo so nghiem\n");
	} else {
		x = -b / a;
		printf("Nghiem phuong trinh = %0.2f", x);
	}
	
	return 0;
}

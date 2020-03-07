#include <stdio.h> 
#include <math.h>

int main() {
	float a, c, b, delta, x1, x2, x;
	printf("Nhap vao cac he so phuong trinh bac hai: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a == 0) { // PT bac 1
		if(b == 0 && c != 0) {
			printf("Phuong trinh vo nghiem\n");
		} else if(b == 0 && c == 0) {
			printf("Phuong trinh co vo so nghiem\n");
		} else {
			x = -c / b;
			printf("Nghiem phuong trinh = %0.2f", x);
		}
	} else { // PT bac 2
		delta = b * b - a * c * 4;
		if(delta < 0) {
			printf("PT vo nghiem");
		} else if(delta == 0) {
			x1 = -b/(2 * a);
			printf("PT co nghiem kep x = %0.2f", x1);
		} else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Nghiem PT la: \nx1 = %0.2f\nx2 = %0.2f", x1, x2);
		}
	}
	
	return 0;
}

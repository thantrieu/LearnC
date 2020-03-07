#include <stdio.h> 

int main() {
	float width, height;
	printf("Nhap hai canh cua hinh chu nhat: ");
	scanf("%f%f", &width, &height);
	
	if(width > 0 && height > 0) {
		float c = (width + height) * 2;
		float a = width * height;
		printf("Chu vi = %0.2f\n", c);
		printf("Dien tich = %0.2f\n", a);
	} else {
		printf("Nhap canh > 0");
	}
	
	return 0;
}

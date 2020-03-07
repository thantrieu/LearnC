#include <stdio.h>

int main() {
	int a, b, c, d;
	printf("Nhap vao a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	int max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
	
	if(a == b && b == c && c == d) {
		printf("Khong co gia tri lon nhat!\n");
	} else {
		printf("Gia tri lon nhat trong 4 so la: %d\n", max);
	}
	
	return 0;
}

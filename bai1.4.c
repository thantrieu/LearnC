#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap vao gia tri so nguyen a, b: ");
	scanf("%d%d", &a, &b);
	
	if(a == b) {
		printf("Hai so bang nhau\n");
	} else if(a < b) {
		printf("%d < %d\n", a, b);
	} else {
		printf("%d > %d\n", a, b);
	}
	return 0;
}

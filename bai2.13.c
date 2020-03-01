#include <stdio.h>

int main() {
	unsigned int n;
	printf("Nhap vao so duong n: ");
	scanf("%d", &n);
	unsigned int root = n, m = 0;
	while(n > 0) {
		m = m * 10 + n % 10;
		n /= 10;
	}
	if(m == root) {
		printf("%d la so thuan nghich", root);
	} else {
		printf("%d khong phai so thuan nghich", root);
	}
	
	return 0;
}

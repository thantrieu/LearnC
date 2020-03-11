#include <stdio.h>

int main() {
	int h;
	printf("Nhap vao chieu cao h: ");
	scanf("%d", &h);
	
	if(h > 0) {
		int i, j;
		for(i = 1; i <= h; i++) {
			for(j = 1; j <= i; j++) {
				printf(" * ");
			}
			printf("\n");
		}
	} else {
		printf("Nhap vao so duong h!");
	}
	
	return 0;
}

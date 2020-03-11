#include <stdio.h>
#include <math.h>

int main() {
	int h, i, j;
	printf("Nhap so duong h: ")	;
	scanf("%d", &h);
	
	if(h > 0) {
		for(i = 1; i <= h; i++) {
			for(j = 1; j < 2*h; j++) {
				if(abs(h - j) <= (i - 1)) {
					printf("%3d", i - abs(h - j));
				} else {
					printf("   ");
				}
			}
			printf("\n");
		}
	} else {
		printf("Vui long nhap h > 0.");
	}
	
	return 0;
}

// Bai 2.11: Liet ke n so nguyen to dau tien
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(n <= 0) {
		printf("Hay nhap so duong n!\n");
	} else {
		int count = 0;
		int m = 2;
		while(1) {
			int mark = 1;
			int i;
			
			for(i = 2; i <= sqrt(m); i++) {
				if(m % i == 0) {
					mark = 0;
					break;
				}
			}
			
			if(mark == 1) {
				count++; // co them 1 so nguyen to
				printf("%d, ", m);
			}
			
			if(count >= n) {
				break;
			}
			m++;
		}
	}
	return 0;
}

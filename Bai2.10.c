// Bai 2.10: Liet ke n so nguyen to dau tien
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int i;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n <= 0) {
		printf("Nhap n > 0");
	} else {
		int count = 0;
		int m = 2;
		while(1) {
			int isOK = 1;
			for(i = 2; i <= sqrt(m); i++) {
				if(m % i== 0) {
					isOK = 0;
					break;
				}
			}
			if(isOK) {
				printf("%d, ", m);
				count++;
			}
			if(count >= n) {
				break;
			}
			m++;
		}
	}
	return 0;
}

#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap a, b > 0: ");
	scanf("%d%d", &a, &b);
	
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("Khong ton tai UCLN, BCNN\n");
		} else if(a == 0 || b == 0) {
			printf("Khong co BCNN, UCLN = %d", (a == 0) ? b : a);
		} else { // a, b > 0
			int bc = a * b;
			// cach 1:
//			while(a != b) {
//				if(a > b) {
//					a = a - b;
//				} else {
//					b = b - a;
//				}
//			}

			// cach 2:
			while(a != 0) {
				int x = a;
				a = b % a;
				b = x;
			}
			
			printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
	} else {
		printf("Nhap a, b > 0");
	}
	
	return 0;
}

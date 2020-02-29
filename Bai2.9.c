// Bai 2.9: Kiem tra so nguyen to
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	if(n < 2) {
		printf("%d khong la so nguyen to.\n", n);
	} else {
		int i;
		int mark = 1;
		for(i = 2; i <= sqrt(n); i++)  {
			if(n % i == 0) {
				mark = 0;
				break;
			}
		}
		if(mark == 1) {
			printf("%d la so nguyen to.\n", n);
		} else {
			printf("%d khong la so nguyen to.\n", n);
		}
		
	}
	return 0;
}

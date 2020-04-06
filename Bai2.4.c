#include <stdio.h>

int main() {
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%u", &n);
	unsigned int s = 0, s1 = 0, s2 = 0;
	unsigned int i;
	
	for(i = 1; i <= n; i++) {
		s += i;
		if(i % 2 == 0) {
			s2 += i;
		} else {
			s1 += i;
		}
	}
	
	printf("Tong: S = %u\n", s);
	printf("Tong chan: S2 = %u\n", s2);
	printf("Tong le: S1 = %u\n", s1);
	
	return 0;
}

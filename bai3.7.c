#include <stdio.h>
#include <stdbool.h>

bool thuanNghich(int n) {
	int m = n;
	int tg = 0;
	while(n > 0) {
		tg = tg * 10 + n % 10;
		n /= 10;
	}
	return tg == m;
}

bool chiaHet(int n, int k) {
	if(k == 0) {
		return false;
	}
	return n % k == 0;
}

int main() {
	int i, k;
	printf("Nhap so duong k: ");
	scanf("%d", &k);
	
	for(i = 10000000; i <= 99999999; i++) {
		if(thuanNghich(i) && chiaHet(i, k)) {
			printf("%10d", i);
		}
	}
	
	return 0;
}


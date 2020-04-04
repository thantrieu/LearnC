#include <stdio.h>

// Hien thi cac uoc nguyen to duy nhat 1 lan

void hienUoc(int n) {
	int i = 2;
	int daInRa = 1;
	while(n > 1) {
		if(n % i == 0) {
			if(daInRa != i) {
				printf("%d, ", i);
				daInRa = i;
			}
			n /= i;
		} else {
			i++;
		}
	}
}

int main() {
	hienUoc(48600);
	return 0;
}


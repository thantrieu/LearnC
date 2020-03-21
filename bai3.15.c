#include <stdio.h>
#include <stdbool.h>

bool thuanNghich(int n) {
	int m = n;
	int dao = 0;
	while(m > 0) {
		dao = dao * 10 + m % 10;
		m /= 10;
	}
	return dao == n;
}

bool khongCoSo6(int n) {
	int c;
	while(n > 0) {
		c = n % 10;
		n /= 10;
		if(c == 6) {
			return false;
		}
	}
	return true;
}

bool tongChiaHet6(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;		
	}
	return sum % 6 == 0;
}

int main() {
	int i;
	for(i = 10000000; i <= 99999999; i++) {
		if(khongCoSo6(i) && tongChiaHet6(i) && thuanNghich(i)) {
			printf("%10d", i);
		}
	}
	return 0;
}


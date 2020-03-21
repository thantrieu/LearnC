#include <stdio.h>
#include <stdbool.h>

bool laSoChan(int n) {
	return n % 2 == 0;
}

bool khongTang(int n) {
	int i = 10000;
	int a, b;
	a = n / i;
	n %= i;
	i /= 10;
	while(n > 0) {
		b = n / i;
		n %= i;
		i /= 10;
		if(a < b) {
			return false;
		}
		a = b;
	}
	return true;
}

void lkSoKhongTang() {
	int i;
	for(i = 11111; i <= 99999; i++) {
		if(laSoChan(i) && khongTang(i)) {
			printf("%10d", i);
		}
	}
}

bool khongGiam(int n) {
	int i = 10000;
	int a, b;
	a = n / i;
	n %= i;
	i /= 10;
	while(n > 0) {
		b = n / i;
		n %= i;
		i /= 10;
		if(a > b) {
			return false;
		}
		a = b;
	}
	return true;
}

void lkSoKhongGiam() {
	int i;
	for(i = 11111; i <= 99999; i++) {
		if(!laSoChan(i) && khongGiam(i)) {
			printf("%10d", i);
		}
	}
}

bool ktraTong(int n) {
	int tChan = 0;
	int tLe = 0;
	int c;
	while(n > 0) {
		c = n % 10;
		if(laSoChan(c)) {
			tChan += c;
		} else {
			tLe += c;
		}
		n /= 10;
	}
	return tLe == tChan;
}

void lkSoTongBangNhau() {
	int i;
	for(i = 11111; i <= 99999; i++) {
		if(ktraTong(i)) {
			printf("%10d", i);
		}
	}
}

int main() {
//	lkSoKhongTang();
//	lkSoKhongGiam();
	lkSoTongBangNhau();
	return 0;
} 

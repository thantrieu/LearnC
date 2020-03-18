#include <stdio.h>

int main() {
	int m, n;
	printf("Nhap hai so m, n > 0: ");
	scanf("%d%d", &m, &n);
	if(m > 0 && n > 0) {
		while(m != n) {
			if(m > n) {
				m = m - n;
			} else {
				n = n - m;
			}
		}
		// uoc chung lon nhat cua m, n
		if(m == 1) {
			printf("Hai so nguyen to cung nhau.");
		} else {
			printf("Hai so KHONG nguyen to cung nhau.");
		}
	} else {
		printf("Nhap hai so m, n > 0.");
	}
	return 0;
}


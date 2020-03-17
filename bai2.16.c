#include <stdio.h>
#include <math.h>

int main() {
	int m, n;
	printf("Nhap m < n: ");
	scanf("%d%d", &m, &n);
	if(m >= 0  && m < n) {
		int start = sqrt(m);
		start = (start * start == m) ? start : start + 1;
		int end = sqrt(n);
		int i;
		for(i = start; i <= end; i++) {
			printf("%d, ", i * i);
		}
	} else {
		printf("Nhap hai so tu nhien m < n.");
	}
	return 0;
}


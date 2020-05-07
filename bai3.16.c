#include <stdio.h>

int pascal(int k, int n) {
	if(k == 0 || k == n) {
		return 1;
	} else {
		return pascal(k - 1, n - 1) + pascal(k, n - 1);
	}
}

int main() {
	int n;
	printf("Nhap gia tri n: ");
	scanf("%d", &n);
	int i, k;
	for(i = 0; i <= n; i++) {
		for(k = 0; k <= i; k++)	 {
			printf("%5d", pascal(k, i));
		}
		printf("\n");
	}
	return 0;
}

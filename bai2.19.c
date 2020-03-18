#include <stdio.h>

int main() {
	double a, x;
	printf("Nhap x, a: ");
	scanf("%lf%lf", &x, &a);
	
	long long kGiaiThua = 1;
	int k = 0;
	double xMuK = 1;
	double kq = 0;
	double tam = xMuK / kGiaiThua;
	
	while(tam >= a) {
		kq += tam;
		k++;
		xMuK *= x;
		kGiaiThua *= k;
		tam = xMuK / kGiaiThua;
	}
	
	printf("e^%0.2lf = %lf", x, kq);
	
	return 0;
}


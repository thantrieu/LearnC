#include <stdio.h>
#include <limits.h>

int firstDigit(long long n) {
	int digit = 0;
	while(n > 0) {
		digit = n % 10;
		n /= 10;
	}
	return digit;
}

int main() {
	FILE *fRead = fopen("INPUT1.IN", "r");
	FILE *fWrite = fopen("OUTPUT1.OUT", "w");
	long long n;
	
	if(fRead) {
		fscanf(fRead, "%lld", &n);
		if(n <= 0) {
			fprintf(fWrite, "FILE NOT FOUND OR INVALID VALUE");
		} else {
			int d = firstDigit(n);
			fprintf(fWrite, "%d", d);
		}
	} else {
		fprintf(fWrite, "FILE NOT FOUND OR INVALID VALUE");
	}
	
	fclose(fRead);
	fclose(fWrite);
	return 0;
}

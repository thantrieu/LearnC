#include <stdio.h>

void errMessage(FILE *f) {
	fprintf(f, "FILE NOT FOUND OR INVALID VALUE");
}

int countDigits(long long n) {
	int count = 0;
	while(n > 0) {
		n /= 10;
		count++;
	}
	return count;
}

int main() {
	FILE *fRead = fopen("INPUT2.IN", "r");
	FILE *fWrite = fopen("OUTPUT2.OUT", "w");
	long long n;
	if(fRead) {
		fscanf(fRead, "%lld", &n);
		if(n <= 0) {
			errMessage(fWrite);
		} else {
			int res = countDigits(n);
			if(res >= 13) {
				errMessage(fWrite);
			} else {
				fprintf(fWrite, "%d", res);
			}
		}
	} else {
		errMessage(fWrite);
	}
	
	fclose(fRead);
	fclose(fWrite);
	
	return 0;
}
